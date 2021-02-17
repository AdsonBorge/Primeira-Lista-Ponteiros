#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Colocamos para sortear valores, a fim de facilitar testes futuros
void multMat(int **matA, int **matB, int **matC, int nla, int ncalb, int ncb){

int soma = 0;

for (int i = 0; i < nla; i++){
    for (int j = 0; j < ncb; j++){
        for (int k = 0; k < ncalb; k++){
            soma = soma + matA[i][k] * matB [k][j];    
        }
        matC[i][j] = soma;
        soma = 0;
    }
}

};

int main()
{

int nla, ncalb, ncb, i, j, min = -10, max = 20; 
int **matA, **matB, **matC; 


printf("Digite a quantidade de linhas da matriz A: ");
scanf("%d", &nla);

printf ("Digite a quantidade de colunas da matriz A e linhas da matriz B: ");
scanf("%d", &ncalb);

printf ("Digite a quantidade de colunas da matriz B: ");
scanf ("%d", &ncb);

matA = malloc(nla * sizeof(int*));
matA[0] = malloc(nla * ncalb * sizeof(int));
for(i = 1; i < nla; i++){
   matA[i] = matA[i - 1] + ncalb;
}

srand(time(NULL));
for (i = 0; i < nla; i++){
    for ( j = 0; j < ncalb; j++){
        matA[i][j] = rand() % max + min;
    }
}

matB = malloc(ncalb * sizeof(int*));
matB[0] = malloc(ncalb * ncb * sizeof(int));
for(i = 1; i < ncalb; i++){
   matB[i] = matB[i - 1] + ncb;
}

for (i = 0; i < ncalb; i++){
    for (j = 0; j < ncb; j++){
        matB[i][j] = rand() % max + min;
    }
}

matC = malloc(nla * sizeof(int*));
matC[0] = malloc(nla * ncb * sizeof(int));
for(int i=1; i < nla; i++){
   matC[i] = matC[i - 1] + ncb;
}

multMat (matA, matB, matC, nla, ncalb, ncb);

printf ("A matriz A e': \n");

for (i = 0; i < nla; i++){
    for (j = 0; j < ncalb; j++){
        printf("%d ", matA[i][j]); 
}
printf("\n");
}

printf ("\n");
printf ("A matriz B e': \n");

for (i = 0; i < ncalb; i++){
    for (j = 0; j < ncb; j++){
        printf("%d ", matB[i][j]); 
}
printf("\n");
}

printf ("\n");
printf ("A matriz C e': \n");

for (i = 0; i < nla; i++){
    for (j = 0; j < ncb; j++){
        printf("%d ", matC[i][j]); 
}
printf("\n");
}


free(matA[0]);
free(matA);

free(matB[0]);
free(matB);

free (matC[0]);
free (matC);



    return(0);

}
