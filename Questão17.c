#include<stdio.h>
#include<stdlib.h>

void somaVet(int *vetA, int *vetB, int *vetC, int n){
   for(int i = 0; i < n; i++){
    *(vetC+i) = *(vetA+i) + *(vetB+i);
   }
}

int main(){

int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

int vetA[n], vetB[n], vetC[n], i;

   for(i = 0; i < n; i++){
    printf("Digite o valor (%d) do primeiro vetor: ", i + 1);
    scanf("%d", &vetA[i]); 
   }
    printf ("\n");

   for(i = 0; i < n; i++){
    printf("Digite o valor (%d) do segundo vetor: ", i + 1);
    scanf("%d", &vetB[i]);
   }

vetA[n] = malloc(n*sizeof(float));
vetB[n] = malloc(n*sizeof(float));
vetC[n] = malloc(n*sizeof(float));


somaVet(vetA, vetB, vetC, n);

printf("\n");

printf("A soma dos vetores e': ");
for(int i = 0; i < n; i++){
    printf("%d ", *(vetC+i));
}

free(vetA);
free(vetB);
free(vetC);

    return 0;
}
