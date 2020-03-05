//Exercicio 4 - Vetores - ED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 40

 int aleatorio(int tam){
    int x;
    x = rand() % 100;
    return x;
}

void bubble(int v[TAM]){
    int i, j, aux;
    for (i = 1; i < TAM; i++) {
        for (j = 0; j < TAM - 1; j++){
            if (v[j]>v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
            }
        }
    }
}

int main () {
    clock_t tempo;
    int v[TAM];
    int i;

    for (i = 0; i < TAM; i++){
        v[i] = aleatorio(TAM);
        printf("%d - ", v[i]);
    }


  printf("\nOrdenados (Bubble Sort):\n");
    tempo = clock();
    bubble(v);
    tempo = clock() - tempo;

  for (i = 0; i < TAM; i++){
    printf("%d - ", v[i]);
  }

  printf("\nTempo de execucao: %lf", ((double)tempo)/CLOCKS_PER_SEC);
}