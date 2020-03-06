#include <stdio.h>
#include <stdlib.h>

int main () {
    int antigo[10], novo[10], i, j;

    for (i = 0; i < 10; i++){
        scanf("%d",&antigo[i]);
    }
    
    int aux = 0;
    for (i = 0; i < 10; i++){
    	for(j = 0; j < aux; j++){
    		if(antigo[i] == novo[j])
    			break;
		}
		if(j == aux){
			novo[aux] = antigo[i];
			aux++;
		}
	}
    
    printf("\nValores que aparecem: ");
    for (i = 0; i < aux; i++){
        printf("%d ", novo[i]);
    }
	
	return 0;
}
