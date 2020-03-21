SIGNAL(TIMER0_COMPA_vect) { //El hardware interrumpe cada 1ms
  
  

  
 
    switch (soundid){
    case 0: //sin sonido
    soundstate = 0;
    break;
    case 1: //'pit'
    if (soundstate == 0){tone(snd_pin, 440,100);soundid=0;break;}
    break;
    case 2: //caca
    if (soundstate == 0){tone(snd_pin, 440);break;}
    if (soundstate == 2){noTone(snd_pin);break;}
    if (soundstate == 4){noTone(snd_pin);tone(snd_pin, 440);break;}
    if (soundstate == 6){noTone(snd_pin);break;}
    if (soundstate == 8){noTone(snd_pin);tone(snd_pin, 440);break;}
    if (soundstate == 10){noTone(snd_pin);soundstate = 0;soundid=0;break;}
    break;
    case 3: //solo
    if (soundstate == 0){tone(snd_pin, 400);break;}
    if (soundstate == 1){noTone(snd_pin);break;}
    if (soundstate == 2){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 3){noTone(snd_pin);break;}
    if (soundstate == 4){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 5){noTone(snd_pin);break;}
    if (soundstate == 6){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 7){noTone(snd_pin);soundstate = 0;soundid=0;break;}
    break;
    case 4: //algo a ocurrido
    if (soundstate == 0){tone(snd_pin, 440);break;}
    if (soundstate == 1){noTone(snd_pin);break;}
    if (soundstate == 2){noTone(snd_pin);tone(snd_pin, 440);break;}
    if (soundstate == 3){noTone(snd_pin);break;}
    if (soundstate == 4){noTone(snd_pin);tone(snd_pin, 500);break;}
    if (soundstate == 6){noTone(snd_pin);break;}
    if (soundstate == 7){noTone(snd_pin);tone(snd_pin, 560);break;}
    if (soundstate == 8){noTone(snd_pin);break;}
    if (soundstate == 9){noTone(snd_pin);tone(snd_pin, 560);break;}
    if (soundstate == 10){noTone(snd_pin);break;}
    if (soundstate == 11){noTone(snd_pin);tone(snd_pin, 620);break;}
    if (soundstate == 12){noTone(snd_pin);soundstate = 0;soundid=0;break;}
    break;
    case 5: //vida en peligro
    if (soundstate == 0){tone(snd_pin, 400);break;}
    if (soundstate == 1){noTone(snd_pin);break;}
    if (soundstate == 2){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 3){noTone(snd_pin);break;}
    if (soundstate == 4){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 5){noTone(snd_pin);break;}
    if (soundstate == 6){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 7){noTone(snd_pin);break;}
    if (soundstate == 8){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 9){noTone(snd_pin);break;}
    if (soundstate == 10){noTone(snd_pin);tone(snd_pin, 400);break;}
    if (soundstate == 11){noTone(snd_pin);soundstate = 0;soundid=0;break;}
    break;
    case 6: //muerto
    if (soundstate == 0){tone(snd_pin, 200);break;}
    if (soundstate == 4){noTone(snd_pin);tone(snd_pin, 180);break;}
    if (soundstate == 6){noTone(snd_pin);tone(snd_pin, 160);break;}
    if (soundstate == 8){noTone(snd_pin);tone(snd_pin, 140);break;}
    if (soundstate == 10){noTone(snd_pin);soundstate = 0;soundid=0;break;}
    break;
    }
    if (soundid != 0){soundstate++;} //Para hacer sonidos, esto avanza en el tiempo de sonido
  
 
}
