//Exercicio 4 - Vetores - ED
#include <stdio.h>
#include <stdlib.h>

#define TAM 40

void selection(int v[TAM]){
    int i, j, aux, menor;
    for (i = 0; i < TAM; i++) {
      menor = i;
        for (j = i; j < TAM; j++){
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
    int v[TAM];
    int i;

    for (i = 0; i < TAM; i++){
        v[i] = rand() % 100;
        printf("%d - ", v[i]);
    }


	printf("\nOrdenados (Selection Sort):\n");
    selection(v);

	for (i = 0; i < TAM; i++){
    	printf("%d - ", v[i]);
	}

	return 0;
}
