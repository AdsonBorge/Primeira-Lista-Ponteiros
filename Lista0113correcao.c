#include <stdio.h>
#include <stdlib.h>


float ordenaVet(int n, float *vetor, float aux){

    // Recebe o tamanho do vetor.
    printf("Quantidade de termos do vetor: ");
    scanf ("%i", &n);

    //Alocando espaço para um bloco de bytes na memória.
    vetor = malloc(n*sizeof(float));
    printf("\n");

        //Laço para inserção de valores

        for(int i = 0; i < n; i++){
            printf("Informe o numero: ");
            scanf("%f", &vetor[i]);
        }

    //Exibe endereco e conteúdo do vetor
    printf("\nVetores digitados: ");

    for(int i =0; i < n; i++){
            printf("Endereco: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }

    //Ordena os vetores na ordem crescente
    for(int i = 0; i < n; i++){
        for(int b = i; b < n; b++){

            if(vetor[i] > vetor[b]){
                aux = vetor[i];
                vetor[i] = vetor[b];
                vetor[b] = aux;
            }
        }
    }

    //Exibe endereco e conteudo do vetor, agora ordenado
    printf("\nOrdendo: ");
    for(int i =0; i < n; i++){
            printf("Endereco: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }
}

int main()
{
    float *vetor;
    int aux;
    int n;

        ordenaVet(n, vetor, aux); // Chamando a funcao ordenaVet(), para ordenar em ordem crescente
    free(vetor);
    
    printf ("\n") ;
    return (0);
} 
