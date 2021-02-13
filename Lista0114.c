#include <stdio.h>
#include <stdlib.h>

/*Explicação qsort: http://www.cplusplus.com/reference/cstdlib/qsort/


Comando: 
void qsort (void* base, size_t num, size_t size,
            int (*compar)(const void*,const void*));

"Sort" = "Organizar".
Organiza elemenos de um array. 

Organiza o "num" de elementos do array apontados pela "base", cada elemento de "size"
bytes de comprimento, usando a função compar para determinar a ordem.

O algoritmo usado por essa função compara pares de elementos pela chamada de uma função
"compar" determinada.

A função não retorna nenhum valor, mas modifica o  

A ordem dos elementos equivalentes é indefinida.
    */


   // A função comparar recebe dois ponteiros constantes
   int compar(const void * a, const void * b){
    return (int) (*(int *)a - * (int *)b);
    
}
int main()
{
    float *vetor;
    int n;
    
    // Recebe o tamanho do vetor.
    printf("Quantidade de termos do vetor: ");
    scanf ("%i", &n); 

    //Alocando espaço para um bloco de bytes na memória.
    vetor = malloc(n*sizeof(float)); 
    printf("\n");

        //Laço para inserção de valores
        for(int i = 0; i<n; i++){
            printf("Informe o numero: ");
            scanf("%f", &vetor[i]);
        } 

    //Exibe endereco e conteúdo do vetor
    printf("\nVetores digitados: ");
    for(int i =0; i < n; i++){
            printf("Posicao: %x Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }

    qsort(vetor, n, sizeof(float), compar);
    

    //Exibe endereco e conteudo do vetor, agora ordenado
    printf("\nOrdenado: ");
    for(int i = 0; i < n; i++){
            printf("Endereco: %X Valor:%f ", vetor+i, *(vetor+i));
            printf("|");
    }
    
    printf("\n");
    free(vetor);
    return (0);
}