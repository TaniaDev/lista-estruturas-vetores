//Exercicio 2 - Vetores - ED

#include <stdio.h>

 int main () {
    int v[10], maior, i;
    maior = 0;
    printf("Insira 10 números:\n");
    for (i = 0; i < 10; i++){
       scanf("%d",&v[i]);
         if(v[i] > maior){
          maior = v[i];
         } 
    }
    printf("Maior = %d\n", maior);
    return 0;
 }
