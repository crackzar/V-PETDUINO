
 /* 
 * 
 * 
 * 
 * 
 *Pines estándar para componentes (puede cambiarlo en el código a continuación)
 * Pines de la pantalla (Nokia 5510):
 * Serial clock out (SCLK) - 13
 * Serial data out (DIN / DN / MOSI) - 11
 * Data/Command select (D/C) - A2
 * LCD chip select (SCE / CS / CE) - A1
 * LCD reset (RST/reset) - A0
 * 
 * --- Botones
 * Los botones son pull-up. Conéctese a GND y pin.
 * Botón A - pin 8 - llamada función btnA () en el código
 * Botón B - pin 6 - llamada función btnB () en el código
 * Botón C - pin 7 - llamada función btnC () en el código
 * ---
 * Sonido - pin 3 (cambio en snd_pin)
 * 
 */

#include <SPI.h> //LCD comunicacion
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
#include "imagenesbmp.h" //Archivo imagenesbmp.h que contiene matrices de imágenes de V PET


//Pines Arduino y configuración de pantalla

//Botones
const byte snd_pin = 3; //Pin de sonido
const byte btnA_pin = 8; //Boton A
const byte btnB_pin = 6; //Boton B
const byte btnC_pin = 7; //boton C
//Pantalla
Adafruit_PCD8544 display = Adafruit_PCD8544(13,11,A2,A1,A0); //pantalla (SCLK,DIN,D/C,CS,RST)
const bool scr_rotate = 0; //Si la pantalla está invertida (arriba abajo), cambie a 1 para ver a la derecha
const byte scr_contrast = 60; //Contraste de la pantalla (0 to 100)
//Finalizar configuración de Arduino

byte menu[3] = {0,0,0}; //Esto registra dónde estás (Posición de los menús y submenús)


byte posx = 15; //Pocision inicial del VPET en el eje x
byte posy = 24; //Pocision inicial del VPET en el eje y

byte hungry = 2; //Nivel inicial de hambre
byte Strength = 3; //Nivel inicial de felicidad
byte poop = 0; //Tiene caca?


byte weight = 5; //Peso de PET V


// Constantes para valores decrecientes como el hambre 
//(con num es el "límite" para disminuir, sin él, es el número actual. 
//Cuando var es igual a número, ocurre un evento cuando decresio hasta cero.

const int numlowerhungry = 1250; //valor para decreser de hambre
const int numlowerStrength = 1600; //valor para decreser de felicidad
const int numdopoop = 900; //valor para decreser para caca
int lowerStrength = 0; //variable de valor bajo de felicidad
int lowerhungry = 0; //variable para valor bajo de hambre
int dopoop = 0;  //variable de caca
bool vardirection = 0; //Almacena la dirección horizontal de digimon 
byte actual_digimon = 0; //La evolución del PET V " valor inicial
byte soundid = 0; //Var para reproducción de sonido, si es 0, significa no reproduce sonido
byte soundstate = 0; //  Estado del sonido. 0 no reproduce sonido
byte ralensignal[3] = {0,0,0}; //Esto es para saber cuánto tiempo pasa en la multitarea. (en SIGNAL(TIMER0_COMPA_vect) funciona en 10,50,1000ms {10,5,20})

///// en prueba///
int beenalone = 0; //Cuanto tiempo V PET ha estado solo
bool vardie = 0; //V PET variable para muerte

///////////////////////////////////////////////////////////////////////////////
//frame
//tiempo///////////////////////////////////////////////////////////////////////
// Variables de tiempo e inicializacion para el contador de tiempo
unsigned long tiempo,tiempoa = 0, retardo = 1000; 
byte segundo;
byte segundo2;
byte segundo3;
byte hr=0;
byte minn= 0;
byte seg= 0;
///////////////////////////////////////////////////////////////////////
//tiempos de vida de cada etapa el tiempo de la variable es en segundos //
int training = 60;
int rookie = 60;
int champion = 60;
int ultimate =60;
///////////////////////////////////////////////////////////////////////
//antirebote 
//inicializacion de variables para antirebote
int A_ButtonState =0;
int B_ButtonState =0;
int C_ButtonState =0;
int last_A_ButtonState =0;
int last_B_ButtonState =0;
int last_C_ButtonState =0;
unsigned long TA=0;
unsigned long TB =0;
unsigned long TC =0;
int RB =10;

////////////////////////////////////////////////////////////////////////////

void setup(){

  randomSeed(analogRead(0)); //Para operaciones aleatorias

  ADCSRA = 0; //Desactiva ADC (Desactiva las lecturas analógicas  para ahorrar energía. No se utiliza).
  
  //Esto hace que la interrupción SIGNAL(TIMER0_COMPA_vect) { } cada 1 ms, haga algo "multitarea" / proceso en segundo plano
  OCR0A = 0xAF;
  TIMSK0 |= _BV(OCIE0A);
  ////////////////////////////////////////////////////////////////////////////
  
  display.begin();
  /* Configurar botones pull-up */
  pinMode(btnA_pin, INPUT); //btnA
  pinMode(btnB_pin, INPUT); //btnB 
  pinMode(btnC_pin, INPUT); //btnC
  digitalWrite(btnA_pin, HIGH); //botones Pull up
  digitalWrite(btnB_pin, HIGH);
  digitalWrite(btnC_pin, HIGH);
  ////////////////////////////////////////////////////////////////////////////
  
  display.setRotation(scr_rotate * 2); //Gire la pantalla 180 grados si rotatescr = 1
  display.setContrast(scr_contrast); //Contraste de la pantalla
  display.display(); // muestre la pantalla de bienvenida de adafruit
  delay(500);
  display.clearDisplay(); // limpia pantalla
  //titulo de bienvenida y leyenda de carga////
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("V PET");
  display.setCursor(0, 10);
  display.print("V0.1");
  display.setCursor(0, 20);
  display.print("");
  display.setCursor(0, 35);
  display.print("Loading...");
  display.display();
  delay(600);
 //////////////////////////////////////////////////////////////
}




void loop() {

  
//lectura de estado de los botones verificando si fue presionado A , B , C ///// 
A_ButtonState = digitalRead(btnA_pin);
B_ButtonState = digitalRead(btnB_pin);
C_ButtonState =   digitalRead(btnC_pin);

checkIf_A_ButtonIsPressed();
checkIf_B_ButtonIsPressed();
checkIf_C_ButtonIsPressed();
/////////////////////////////////////////////////////////////////////////////////      
display.clearDisplay();
      
tiempo = millis(); //asignando el valor de la funcion millis a la variable tiempo
contador(); // llamada a la funcion contador
dibujarpantalla();//llamada a la funcion dubujar para presentar el contenido en pantalla menus y VPET entre otras cosas
pasodeltiempo(); //llamada a funcion encargada de contabilizar los ciclos y contar tiempo
display.display();    
}
