/* en esta seccion se hace una funcionpara el dibujo en pantalla de la animacion de comida tanto para carne como para vitamina*/
void dibujocomida() {
  
  
  switch (menu[1]) {
    case 1://animacion de comer carne
    
      if (0 == segundo2)
    {
          display.drawBitmap(25, 30, carne1_bmp, 8, 8, 1);
    }
        if (1 == segundo2)
    {
          display.drawBitmap(25, 30, carne2_bmp, 8, 8, 1);
    }
        if (2 == segundo2)
    {
          display.drawBitmap(25, 30, carne3_bmp, 8, 8, 1);
    }
        if (3 == segundo2)
    {
          display.drawBitmap(25, 30, carne4_bmp, 8, 8, 1);
    }
      break;
    case 2://animacion de comer vitamina
    
    if (0 == segundo2)
    {
          display.drawBitmap(25, 30, pildora1_bmp, 8, 8, 1);
    }
        if (1 == segundo2)
    {
          display.drawBitmap(25, 30, pildora1_bmp, 7, 7, 1);
    }
        if (2 == segundo2)
    {
          display.drawBitmap(25, 30, pildora1_bmp, 5, 4, 1);
    }
        
      
      break;
      
  }

}
