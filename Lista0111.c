#include <stdlib.h>
#include <stdio.h>

/*Identifique quais dos seguintes comandos é válido ou inválido: 

a. aloha[2] = value; VÁLIDO
b. scanf("%f", &aloha); INVÁLIDO
c. aloha = "value"; INVÁLIDO
d. printf("%f", aloha); INVÁLIDO
e. coisas[4][4] = aloha[3]; VÁLIDO
f. coisas[5] = aloha; INVÁLIDO
g. pf = value; VÁLIDO
h. pf = aloha; VÁLIDO
*/

int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2; 
int i=3;

/*a*/
aloha[2] = value;

/*b*/
//scanf("%f", &aloha);

/*c*/
//aloha = "value";

/*d*/
//printf("%f", aloha);

/*e*/
//coisas[4][4] = aloha[3];

/*f*/
//coisas[5] = aloha;

/*g*/
//pf = value;

/*h*/
//pf = aloha;

return 0;
} 