#include <stdio.h>
#include <stdlib.h>

/*

Resposta:
*(pulo + 2)

*/

int main(){

    int pulo[6] = {1,2,3,4,5,6};

    printf("%d \n", *(pulo + 2)); //Exibe o 3º valor do vetor
    printf("%d \n", *(pulo + 4)); //Exibe o 5º valor do vetor
    printf("%d \n", pulo + 4); //Exibe o endereço do 5º termo do vetor
    printf("%d \n", pulo + 2); //Exibe o endereço do 3º termo do vetor

    return 0;
}