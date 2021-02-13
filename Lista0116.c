#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compar(const void * a, const void * b){
    return (int) (*(int *)a - * (int *)b);
    
}

float ordenaVet(int n, float *vetor, float *vetor2){
    
    int aux, min = -10000, max = 20000;

    time_t t, t1;

    printf("Quantidade de termos do vetor (preferir maior que 10.000 e menor que 100.000): ");
    scanf ("%i", &n);

    vetor = malloc(n*sizeof(float));
    vetor2 = malloc(n*sizeof(float));
    
    printf("\n");

    for (int i = 0; i < n; i++){
        vetor[i]= rand() % max + min;
        vetor2[i] = vetor[i];
    }

    t = clock();
    for(int i = 0; i < n; i++){
        for(int b = i; b < n; b++){
            if(vetor[i] > vetor[b]){
                aux = vetor[i];
                vetor[i] = vetor[b];
                vetor[b] = aux;
            }
        }
    }
    t = (clock() - t);

    t1 = clock();
    qsort(vetor2, n, sizeof(float), compar);
    t1 = (clock() - t1);

    printf("O tempo para organizar em pelo codigo comum foi: %f \n", ((float)t)/CLOCKS_PER_SEC);
    printf("O tempo para organizar em pelo qsort foi: %f \n", ((float)t1)/CLOCKS_PER_SEC);
}

int main()
{
    float *vetor, *vetor2;
    int n;

        ordenaVet(n, vetor, vetor2);  
    free(vetor);
    free(vetor2);

 
    return (0);
} 
