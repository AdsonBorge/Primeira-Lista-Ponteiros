#include <stdio.h>
#include <stdlib.h>

/*
5. Determine  o  que  será  mostrado  pelo  seguinte  programa  (compile-o,  execute-o  e  
verifique  se foram obtidas as respostas esperadas).

(a)
esperado: 10;
obtido: 20;
/ p1 primeiro aponta para a referencia do valor, depois o *p1 aponta para um valor inteiro, por isso a diferença. 

(b)
esperado: 29.0;
obtido: 29.0;

(c)
esperado: P;
obtido: P;

(d)
esperado: e;
obtido: e;

(e)
esperado: P;
obtido: P;

(f)
esperado: e;
obtido: e;

(g)
esperado: n; 
obtido: t;

(h) 
esperado: 31; 
obtido:  31;

(i)
esperado: 45;
obtido: 45;

(j)
esperado: 31;
obtido: 31;

(l)
esperado: algum lixo de memória
obtido: 6422224

(m)
esperado: 45
obtido: 45


(n)
esperado: 45
obtido: 45
*/

int main(){
    int valor;
    int *p1;

    float temp; 
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor [3];
    int *p4;
    int *p5;

    
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
   /* */
    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf ("%.1f \n", temp);
    /**/
    /* (c) */ 
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    /**/ 
    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    /**/
    /* (e)  */
    p3 = nome;
    printf ("%c \n", *p3);
   /* */
    /* (f) */ 
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* (g)  */
    p3--;
    printf ("%c \n", *p3);

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf ("%d \n", idade);

    /* (i) */
    p5 = p4+1;
    idade = *p5;
    printf ("%d \n", idade);

    /* (j) */
    p4 = p5 -1;
    idade = *p4;
    printf("%d \n", idade);

    /* (l) */
    p4 = p4 -2;
    idade = *p4;
    printf("%d \n", idade);

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* (n) */
    p5;
    printf ("%d \n", *p5);
/**/
    return (0);
}
