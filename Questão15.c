#include <stdio.h>
#include <stdlib.h>


float compar(float *vetor, int n){
    float aux;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    return *vetor;
}

float ordenaVet(float (*c)(float *, int), float *vetor){

    int n;

    printf("Quantidade de termos do vetor: ");
    scanf ("%i", &n);

    vetor = malloc(n*sizeof(float));
    printf("\n");

        for(int i = 0; i < n; i++){
            printf("Informe o numero: ");
            scanf("%f", &vetor[i]);
        }
    c(vetor, n);
  
    printf("\nOrdenado: ");
    for(int i =0; i < n; i++){
            printf("Endereco: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }

    return 0;
}

int main () {

    float *vetor;

    ordenaVet(compar, vetor);
    
    free(vetor);

    return 0;
} 
 
