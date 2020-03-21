void digimon_draw(byte tamax, byte tamay) { //dibuja digimon en

   //Movimiento horizontal
    
    if (segundo2 == 1){
      segundo2=0;
    switch (vardirection){
      case 0: //Va a la derecha
      posx +=2;
      if (posx > 65){posx -= 1;vardirection = 1;}
      break;
      case 1: //Va a la izquierda
      posx -=2;
      if (posx < 1){posx += 1;vardirection = 0;}
      }
    }
  
  
///en training

if ( actual_digimon == 0)

{
        
               
           if (0==segundo )
        {
                display.drawBitmap(tamax, tamay, botamon1_bmp, 8, 6, 1); //sprites de animacion  tamax, tamay es la esquina superior izquierda donde se dibuja el mapa de bits, w=8, h=6 son el ancho y la altura en píxeles.
                
        }
        if (1==segundo)
        {
                display.drawBitmap(tamax, tamay+1, botamon2_bmp, 8, 5, 1);
        
        }
        if (2==segundo)
        {
                display.drawBitmap(tamax, tamay+1, botamon10_bmp, 8, 5, 1);
        
        }
        if (3==segundo)
        {
                display.drawBitmap(tamax, tamay-2, botamon3_bmp, 8, 8, 1);
        
        }
        if (4==segundo)
        {
                display.drawBitmap(tamax, tamay-2, botamon4_bmp, 8, 8, 1);
        
        }
        
        
        
 
}


if ( actual_digimon == 1)

{
         
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, koromon1_bmp, 11, 8, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay-2, koromon2_bmp, 11, 10, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay-2, koromon3_bmp, 12, 10, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay-2, koromon2_bmp, 11, 10, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay-2, koromon4_bmp, 12, 10, 1);
                  }
}
//agumon
if ( actual_digimon == 2)

{
         
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, agumon1_bmp, 15, 15, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay+1, agumon2_bmp, 15, 14, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay-1, agumon3_bmp, 15, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay+1, agumon2_bmp, 15, 14, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay-1, agumon4_bmp, 15, 16, 1);
                  }
}
///betamon
if ( actual_digimon == 3)

{
         
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, betamon1_bmp, 16,12, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, betamon2_bmp, 16, 11, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, betamon3_bmp, 16, 15, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, betamon2_bmp, 16,11, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, betamon9_bmp, 16, 15, 1);
                  }
}

////////////////////////////////////////////////////////////////////////////////////////////


///greymon
if ( actual_digimon == 4)

{
      
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, greymon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, greymon2_bmp, 16, 15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, greymon3_bmp, 16, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, greymon9_bmp, 16,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, greymon10_bmp, 16, 16, 1);
                  }
}

///tyranomon
if ( actual_digimon == 5)

{
          
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, tyranomon1_bmp, 15,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, tyranomon2_bmp, 16, 15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, tyranomon4_bmp, 16, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, tyranomon2_bmp, 16,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, tyranomon11_bmp, 16, 16, 1);
                  }
}

///devimon
if ( actual_digimon == 6)

{
         
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, devimon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, devimon2_bmp, 15,15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, devimon1_bmp, 16, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, devimon8_bmp, 15,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, devimon1_bmp, 16, 16, 1);
                  }
}

///meramon
if ( actual_digimon == 7)

{
        
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, meramon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, meramon2_bmp, 14,16, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, meramon3_bmp, 16, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, meramon2_bmp, 14,16, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, meramon9_bmp, 16, 16, 1);
                  }
}

///airdramon
if ( actual_digimon == 8)

{
         
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, airdramon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, airdramon2_bmp, 16, 15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, airdramon4_bmp, 16, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, airdramon2_bmp, 16,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, airdramon12_bmp, 16, 16, 1);
                  }
}

///seadramon
if ( actual_digimon == 9)

{
         
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, seadramon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, seadramon2_bmp, 16, 14, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, seadramon3_bmp, 15, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, seadramon2_bmp, 16,14, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, seadramon10_bmp, 15, 16, 1);
                  }
}

///numemon
if ( actual_digimon == 10)

{
          
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, numemon1_bmp, 15,14, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, numemon2_bmp, 15,15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, numemon4_bmp, 15,16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, numemon2_bmp, 15,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, numemon12_bmp, 15,16, 1);
                  }
}

///metal greymon
if ( actual_digimon == 11)

{
       
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, metal_greymon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, metal_greymon2_bmp, 16, 15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, metal_greymon3_bmp, 16, 17, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, metal_greymon2_bmp, 16,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, metal_greymon10_bmp, 16, 17, 1);
                  }
}

///mamemon
if ( actual_digimon == 12)

{
       
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, mamemon1_bmp, 8,7, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, mamemon2_bmp, 6,7, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, mamemon4_bmp, 8,8, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, mamemon2_bmp, 6,7, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, mamemon10_bmp, 8,8, 1);
                  }
}

///monzaemon
if ( actual_digimon == 13)

{
          
  if (0 == segundo)
                  {
          display.drawBitmap(tamax, tamay, monzaemon1_bmp, 16,16, 1);
                  }
                  if (1 == segundo)
                  {
          display.drawBitmap(tamax, tamay, monzaemon2_bmp, 16, 15, 1);
                  }
                  if (2 == segundo)
                  {
          display.drawBitmap(tamax, tamay, monzaemon3_bmp, 16, 16, 1);
                  }
                  if (3 == segundo)
                  {
          display.drawBitmap(tamax, tamay, monzaemon2_bmp, 16,15, 1);
                  }
                  if (4 == segundo)
                  {
          display.drawBitmap(tamax, tamay, monzaemon10_bmp, 16, 16, 1);
                  }
}

  
  
  
}
