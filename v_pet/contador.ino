/*se toma el valor asignado en el loop "tiempo=millis(); para hacer los temporalizadores para los ciclos 
requeridos para diversas actividas temporales como lo son tiempo de vida el cual es facil mente adptable 
segun se requiera, es utilizada para animar el v pet , para pasar entre las transiciones de evolucion, etc. */

void contador ()
{
  if (tiempo > tiempoa+retardo)
  {
    tiempoa=tiempo;

//
if (seg<=59)
{
  seg= ++seg;
}
else
{
  seg = 0;
}
if (seg==60)
{
  minn= ++minn;
}
if (minn>=59)
{
  minn = 0;
}


if (minn==60)
{
  hr= ++hr;
}



/// variable random para animacion al azar
   
    if(segundo<=random (4))
    {
    segundo = ++segundo;
    }
    else
    {
      segundo = 0;
    }
   
    //temporalizzador 2///comida
    if(segundo2<=3)
    {
    segundo2 = ++segundo2;
    }
    else
    {
      segundo2 = 0;
    }
   
    ///temporalizador 3 evolucion bebe evolucion
if (actual_digimon==0)
{
    if(segundo3<=training)
    {
    segundo3 = ++segundo3;
    }
    else
    {
      segundo3 = 0;
    }
    
    if (segundo3 == training)
    {
      actual_digimon= ++actual_digimon;
      segundo3=0;
    }
}
///tiempo niño
if (actual_digimon==1)
{
    if(segundo3 <= rookie)
    {
    segundo3 = ++segundo3;
    }
    else
    {
      segundo3 = 0;
    }
    
    if (segundo3 == rookie)
    {
      actual_digimon= ++actual_digimon;
      segundo3=0;
    }
}

// adolecente
if (actual_digimon== 2)
{
    if(segundo3<=champion)
    {
    segundo3 = ++segundo3;
    }
    else
    {
      segundo3 = 0;
    }
    
    if (segundo3 == champion)
    {
     actual_digimon= ++actual_digimon;
     segundo3=0;
    }
}
    // ultimate
if (actual_digimon >= 3 )
{
    if(segundo3<=ultimate)
    {
    segundo3 = ++segundo3;
    }
    else
    {
      segundo3 = 0;
    }
    
    if (segundo3 == ultimate)
    {
     actual_digimon= ++actual_digimon;
     segundo3=0;
    }
    if (actual_digimon >=13)
    {
      actual_digimon =13;
    }
    
    
}


    
    
  }
}
