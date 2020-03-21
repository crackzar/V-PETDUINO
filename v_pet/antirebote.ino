/* si requiere mas informacion de esta funcion busque en la wiki de arduino ahi viene detallado como es que funciona */

/*esta es la funcion que se encarga de quitar el rebote de nuestros pulsadores , 
de igual forma podria haberse hecho con un anti rebote por harware con un capacitor electrolitico de 10Uf 
en paralelo con el boton pero haci es mas simple el montaje*/

void checkIf_A_ButtonIsPressed()
{
  if(millis()>TA+RB)
  {
  if (A_ButtonState != last_A_ButtonState) 
  {
    if (A_ButtonState == 0) {
      btnA();
    }
    
    
  }
  TA=millis();
  }
   last_A_ButtonState = A_ButtonState;
   
  
}

void checkIf_B_ButtonIsPressed()
{
  if(millis()>TB+RB)
  {
   if (B_ButtonState != last_B_ButtonState) 
  {
    if (B_ButtonState == 0) {
      btnB();
    
  }
    TB=millis();
  }
  }
   last_B_ButtonState = B_ButtonState;
}

 void checkIf_C_ButtonIsPressed()
  {
    if(millis()>TC+RB)
  {
  
    if (C_ButtonState != last_C_ButtonState) 
  {
    if (C_ButtonState == 0) 
    {
      btnC();
    }
  
    TC=millis();
  }
  }
  
   last_C_ButtonState = C_ButtonState;
  }
       
 
 
 
