void btnA() {
  beenalone = 0; //Haces arduitochi no solo
  
  //si no está entrenado, procedimientos normales
    if (menu[1] == 0) {
      menu[0] = menu[0] + 1; //Si no se selecciona nada, continúe seleccionando
      return;
    }
    if (menu[1] != 0 && menu[2] == 0) {
      menu[1] = menu[1] + 1; //Cambiar opción para el menú [1]
      return;
    }
    if (menu[2] != 0 && menu[0] == 4) {
      menu[2] = menu[2] + 1; //Cambiar opción en el juego / sub menu
      return;
    }
   //Fin del uso normal de botones

 
}

void btnB() {
  beenalone = 0;
  
  //Solo ejecuta la primera coincidencia
   
    
    if (menu[0] != 0 && menu[1] == 0) {menu[1] = 1;menu[2] = 0;return;} //si una opcion es seleccionada  (menu[0] != 0)
    
    if (menu[0] == 4 && menu[1] == 1 && menu[2] != 0) {if (weight >= 6){weight -= 2;return;}else{soundid=1;return;}} //carga el primer menu entrenamiento

    ///para acceder a menu batalla
    if (menu[0] == 4 && menu[1] == 2 && menu[2] != 0) {if (weight >= 6){weight -= 2;return;}else{soundid=1;return;}} //carga el submenu 1
    if (menu[0] == 2 && menu[1] != 0) {menu[2] = 1;return;} //hace que v pet coma 
    if ((menu[0] == 3 || menu[0] == 4 || menu[0] == 6) && menu[1] != 0) {menu[2] = 1;;return;} //Seleccionar en comida, baño, juegos, guardar. Restablezco varproc para propuestas de matriz de elementos
    

  }

  


void btnC() {
  beenalone = 0;

  
    if (menu[0] == 0) { //no hace nada solo es para saber que no esta solo
      //
    }
    if (menu[1] == 0) { //regresa a pantalla principal
      menu[0] = 0;
      return;
    }
    if (menu[1] != 0 && menu[2] == 0) { //regrea a sub menu 1
      menu[1] = 0;
      return;
    }
    if (menu[0] == 4 && menu[2] != 0) { //regrea a sub menu 2
      menu[2] = 0;
      return;
    }
    if (menu[0] == 6 && menu[2] != 0) { //regrea a sub menu 3
      menu[2] = 0;
      menu[1] = 0;
      return;
      
    }
  

  
}
