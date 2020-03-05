//Exercicio 5 - Vetores - ED
#include <stdio.h>
#include <stdlib.h>

#define TAM 30

 int aleatorio(int tam){
    int x;
    x = rand() % 100;
    return x;
}

int main () {
    int v[TAM], i;
    float soma = 0;

    for (i = 0; i < TAM; i++){
        v[i] = aleatorio(TAM);
        printf("%d - ", v[i]);
    }
    for (i = 0; i < TAM; i++){
        soma = soma + v[i];
    }

    printf("\nMedia Aritmetica: %.2f", soma/TAM);
}