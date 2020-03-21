void dibujarpantalla() {
    //Menu icons  
  switch (menu[0]) {
    case 1:
      
      display.drawBitmap(30, 15, menu_status_bmp, 24, 17, 1); //Estado
      break;
    case 2:
      //x,y
       display.drawBitmap(30, 13, menu_food_bmp, 23, 24, 1); //comida
      break;
    case 3:
      
      display.drawBitmap(32, 15, menu_cleaning_bmp, 19, 20, 1); //WC
      break;
    case 4:
      
      display.drawBitmap(31, 14, menu_training_bmp, 21, 23, 1); //Entrenamiento
      break;
    case 5:
      
      display.drawBitmap(30, 12, menu_ligt_bmp, 24, 24, 1); //Luz
      break;
    case 6:
      
      display.drawBitmap(31, 13, menu_care_bmp, 22,22, 1); //Curacion
      break;
  }
  if (menu[0] >= 7) {
    menu[0] = 0;
  }
  ////////////////////////////////////////////////////////////////////////
  ///////////////////////dibujo digimon////////////////////////////////
  if (menu[0] == 0) { //si esta en reposo //pantalla v pet principal
   
      digimon_draw(posx, posy);
      //cacas///////////////////
      if (poop == 1) {
        display.drawBitmap(66, 40, caca1_bmp, 8, 8, 1); //caca
      }
      
      
      ///////////////////////////////////////////////////////////
      
    
   
  }
  ///////////////////////////////////////////////////////////////////////////////
  //////////////////////seleccion de menus/////////////////////////////////////
  if (menu[1] != 0) {
    switch (menu[0]) {
      case 1://estado
      display.clearDisplay();
        menu_status_draw();
        break;
      case 2://comida
      display.clearDisplay();
        menu_meal_draw();
        break;
      case 3://wc
      display.clearDisplay();
        menu_wc_draw();
        break;
      case 4:
      display.clearDisplay();
        menu_training_draw();
        break;
      case 5: //luz
      display.clearDisplay();
        display.setCursor(20, 20);
        display.print("####");
        break;
      case 6://curacion
      display.clearDisplay();
        display.setCursor(20, 20);
        display.print("####");
        break;
    }
  }
  ////////////////////////////////////////////////////////////////////////
  

}
//////////////////////////termina dibujo pantalla/////////////////////////////
/////////////////////////funciones de sub menu/////////////////////////////////

void menu_status_draw() {
  if (menu[1] >= 3) {
    menu[1] = 1;
  }
  byte x = 0;
  switch (menu[1]) {
    case 1://bub menu estatus muestra estadisticas del v pet
      display.setCursor(4, 12);
      display.print("Hungry:"); //nivel de hambre
      for (x = 0; x < hungry; x++) {//ciclo de aumento de signo "+" segun el nivel de hambre
        display.print("+");
      }
      for (byte y = x; y < 4; y++) {//ciclo de aumento de signo "-" segun el nivel de hambre
        display.print("-");
      }
      display.setCursor(4, 22);
      display.print("Strength:"); //nivel de fuerza
      for (x = 0; x < Strength; x++) {//ciclo de aumento de signo "+" segun el nivel de fuerza
        display.print("+");
      }
      for (byte y = x; y < 4; y++) {//ciclo de aumento de signo "-" segun el nivel de fuerza
        display.print("-");
      }
      display.setCursor(4,32);
      display.print("Weight: ");//estadistica de peso
      display.print(weight);//muestra valor del peso del v pet
    break;
    case 2://sub menu tiempo de vida del v pet
      display.setCursor(0, 0);
      display.print("tiempo");
      display.setCursor(0,13);
        display.print(hr);
        display.setCursor(10,13);
        display.print(":");
        display.setCursor(15,13);
        display.print(minn);
        display.setCursor(30,13);
        display.print(":");
        display.setCursor(40,13);
        display.print(seg);

     
      
    break;
  }
}
//menu comida carne y vitamina
void menu_meal_draw() {
  if (menu[1] >= 3) {
    menu[1] = 1;
  }
  if (menu[2] == 0) { //Mientras no ha elegido la comida
    display.setCursor(4, 12);
    display.print("Select food:");
    switch (menu[1]) {
      case 1://seleccion de carne
      segundo2 = 0;
        display.setCursor(4, 22);
        display.print("food");
        display.drawBitmap(38, 30, carne1_bmp, 8,8, 1);
        break;
      case 2: // seleccion de vitamina
      segundo2 = 0;
        display.setCursor(4, 22);
        display.print("vitamine");
        display.drawBitmap(38, 30, pildora1_bmp, 8, 8, 1);
        break;
    }
  }

  if (menu[2] != 0) 
  {
    
    
//animacion y aumento de estadistica commida "carne"
if (menu[1]== 1) {//seleccion de animacion carne
      
    
    dibujocomida();
    if (segundo2 >= 4) {
      
      if (hungry < 5){
               
        weight +=1;
        hungry++;
        }
      
      menu[2] = 0;
    }
    if (hungry == 5){
        display.clearDisplay();
    
      menu[2] = 0;
        
        }
  }
    

    if (menu[1]== 2) { //seleccion de animacion vitamina
      
    
  dibujocomida();
    if (segundo2 >= 4) {
      weight +=2;
      if (Strength < 5){Strength++;}
      
      menu[2] = 0;
    }
    }
    }

  }


void menu_wc_draw()
{    
        if (poop == 0){soundid=1;menu[0] = 0;menu[1] = 0;} //si no hay caca regresa a pantalla principal
        if (poop >= 1){
        digimon_draw(posx, posy);
        display.setCursor(4, 12);
        display.print("Limpiando");
        display.display();
        delay(1000);
        poop = 0;
        dopoop = 0;
        menu[0] = 0;
        menu[1] = 0;
        }
        
            
    
  }



void menu_training_draw()
{
  if (menu[2] == 0) {
    display.setCursor(16, 12);
    display.print("clasic");
    display.setCursor(16, 20);
    display.print("pendulum");
    
    if (menu[1] >= 3) {
      menu[1] = 1;
    }
    display.setCursor(4, 12+((menu[1]-1)*8));
    display.print("->");

  }
  if (menu[2] == 1) {
    
    
  }
        
        
    
    } 
  
 
