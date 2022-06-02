#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int k = 2;
  int i = 0;
  int suma = 0;
  int n = atoi(argv[1]);
  int a[n][n];



  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j]= atoi(argv[k]);//k sirve como indice para el argumento q ve en la matriz, arranca en 2 porque los primeros dos argumentos se usan para otra cosa
      printf(" %d ", a[i][j]);
      k++;
    }
    printf("\n");
  }
  while (i < n) {
    suma += a[i][i];
    i++;
  }
  printf("%d\n", suma);
  return 0;
}
