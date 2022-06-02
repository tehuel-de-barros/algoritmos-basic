#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  char *palos[] = {"Espada", "Basto", "Copa", "Oro"};
  char *numeros[] = {
    "Ancho",
    "Dos",
    "Tres",
    "Cuatro",
    "Cinco",
    "Seis",
    "Siete",
    "Sota",
    "Caballo",
    "Rey"
  };
  char mazo[40][50];
  for (int i = 0; i < 40; i++) {
    char carta[50] = "";
    strcat(carta, numeros[i % 10]);
    strcat(carta, " de ");
    strcat(carta, palos[i / 10]);

    strcpy(mazo[i], carta);


  //  printf("%d %s\n", i , mazo[0]);
  }
  for (int i = 0; i < 200; i++) {
    int r = rand() % 40;
    int s = rand() % 40;
    char temp[50] = "";
    strcpy(temp, mazo[r]);
    strcpy(mazo[r], mazo[s]);
    strcpy(mazo[s], temp);
  }
for (int i = 0; i < 40; i++)
  printf("%s\n", mazo[i] );


int cant_cartas = atoi(argv[1]);

int ultima_carta = 0;
for (int i = 0; i < cant_cartas; i++) {
  printf("%d: %s\n", i+1, mazo[ultima_carta]);
  ultima_carta++;
}

















  return 0;
}
