#include <stdio.h>

// Clignotement d'une LED rouge

// La LED est reliee sur la broche 13 de l'Arduino Uno
#define BROCHE_LED_ROUGE 13
void setup() {
  // Declare la broche sur laquelle la LED est
  // reliee comme une sortie de l'Arduino Uno
  pinMode(BROCHE_LED_ROUGE, OUTPUT);

  // Initialisation de la connection au terminal
  Serial.begin(9600);
  
  //  Permet de compter de 1 à 1000 et de l'afficher sur le terminal: 

  //   static int cpt =0;
  //   while (cpt <= 1000)
  //   {
  //       Serial.println(cpt);
  //       cpt = cpt + 1;
  //   }
  
  // ------------------------------------------------------

  // Fais le carré, cube et le factioriel des nombres de la liste ci dessous : 

  // int nombres[] = { 2, 3, 4, 5 };
  // int taille = sizeof(nombres) / sizeof(nombres[0]);

  // for (int i = 0; i < taille; i++) {
  //   int nombre = nombres[i];
  //   Serial.println(nombre);
  //   Serial.println("Carré");
  //   Serial.println(carre(nombre));
  //   Serial.println("Cube");
  //   Serial.println(cube(nombre));
  //   Serial.println("Fact");
  //   Serial.println(factoriel(nombre));
  //   Serial.println("----------------");
  // }

  // -------------------------------------------------------------------
}

// Fonction pour calculer le carré d'un nombre
int carre(int nombre) {
  return nombre * nombre;
}

// Fonction pour calculer le cube d'un nombre
int cube(int nombre) {
  return nombre * nombre * nombre;
}

// Fonction pour calculer le factoriel d'un nombre
int factoriel(int nombre) {
  if (nombre == 0) {
    return 1;
  } else {
    return nombre * factoriel(nombre - 1);
  }
}


void loop() {
  // Clinotement de la led du pin 13 ------------------------------------------------------------------------------------------------------------------

  // Passer le sortie de l'Arduino à l'état HAUT pour allumer la LED
  // digitalWrite(BROCHE_LED_ROUGE, HIGH);

  // Attendre 1 seconde, pendant ce temps le processeur ne fait rien
  // et la LED reste donc allumee
  // delay(100);

  // Passer le sortie de l'Arduino à l'état BAS pour eteindre la LED
  // digitalWrite(BROCHE_LED_ROUGE, LOW);

  // Attendre 1 seconde, pendant ce temps le processeur ne fait rien
  // et la LED reste donc éteinte
  // delay(100);

  // Affichage Hello world dans le terminale --------------------------------------------------------------------
  // Serial.println("Hello World !");
}