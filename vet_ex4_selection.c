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

void selection(int v[TAM]){
    int i, j, aux, menor;
    for (i = 0; i < TAM-1; i++) {
      menor = i;
        for (j = i+1; j < TAM; j++){
            if (v[j]<v[menor]){
            menor = j;
            }
        }
        if (menor != j) {
          aux = v[i];
          v[i] = v[menor];
          v[menor] = aux;

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
    selection(v);
    tempo = clock() - tempo;

  for (i = 0; i < TAM; i++){
    printf("%d - ", v[i]);
  }

  printf("\nTempo de execucao: %lf", ((double)tempo)/CLOCKS_PER_SEC);
}