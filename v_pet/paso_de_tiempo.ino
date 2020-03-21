/*
 * pasodeltiempo()
 * Esta función verifica el estado del V PET, hace que el "tiempo" sea útil haciendo que el hambre, la fuerza, ... disminuyan al pasar el tiempo
 */
void pasodeltiempo() {
  lowerhungry++; //incremento de variables de decremento de estadisticas
  lowerStrength++;
  if (lowerhungry >= numlowerhungry && hungry > 0) {
    hungry--;
    lowerhungry = 0;
    if (hungry == 0) {soundid=1;} //emite sonido para no morir de hambre
  }
  
  if (lowerStrength >= numlowerStrength && Strength > 0) {
    Strength--;
    lowerStrength = 0;
    if (Strength == 0) {soundid=1;} //emite sonido cuando le faltan vitaminas para la fuerza
  }
  if (lowerhungry == numlowerhungry && hungry == 0) {soundid=1;}
  if (lowerhungry >= (2 * numlowerhungry) && hungry == 0) {
    vardie = 1;/*muerte*/
  }

  if (dopoop < 3*numdopoop) {dopoop++;} //suma las cacas
  if (dopoop == numdopoop){poop = 1;}
  
  if (beenalone == 300){menu[2] = 0;menu[1] = 0;menu[0] = 0;} //salir a pantalla principal si no se usa
 
}
