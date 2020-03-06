//Exercicio 4 - Vetores - ED
#include <stdio.h>
#include <stdlib.h>

#define TAM 40

void bubble(int v[TAM]){
    int i, j, aux;
    for (i = TAM - 1; i > 0; i--) {
        for (j = 0; j < i; j++){
            if (v[j]>v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
            }
        }
    }
}

int main () {
    int v[TAM];
    int i;

    for (i = 0; i < TAM; i++){
        v[i] = rand() % 100;
        printf("%d - ", v[i]);
    }

  printf("\nOrdenados (Bubble Sort):\n");
    
    bubble(v);
    
  for (i = 0; i < TAM; i++){
    printf("%d - ", v[i]);
  }
	return 0;
}
