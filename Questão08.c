#include <stdio.h>
#include <stdlib.h>

/*

Considerando a declaração:

int mat[4], *p, x;

quais das seguintes expressões são válidas? Justifique.

p = mat + 1;
Inválida, o endereço 'p' não pode receber um valor inteiro. 

p = mat;
Inválida, endereço 'p' não pode receber valor inteiro.
se fosse por referencia, provavelmente aprontaria para o resultado. 

x = (*mat);
Válida, permite que x receba o primeiro valor do vetor mat.

*/

//Compilação de código para correção, não foi conseguido resposta satisfatória.

int main(){

int mat[4]= {1, 2, 3, 4};
int *p, x;

p = mat + 1;
p = mat;
p = mat;
x = (*mat);

    return 0;
}
