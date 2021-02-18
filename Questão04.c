#include <stdio.h>
#include <stdlib.h>

/*
a. p = &i; LEGAL
b. *q = &j; ILEGAL
c. p = &*&i; DESCONHEÇO
d. i = (*&)j; DESCONHEÇO
e. i = *&j; DESCONHEÇO
f. i = &&j; ILEGAL
g. q = *p; ILEGAL
h. i = (*p) + *q; LEGAL
*/

// Quando usamos o '*' estamos um ponteiro que aponta para um determinad endereço de memoria. Ja quando usamos '&' usamos apenas como uma referencia, impossibilitanto de fazer alterações.//

//Compilação de código para correção.
int main(){

int i = 2, j = 4, *p, *q;

p = &i; //LEGAL

*q = &j; //ILEGAL

p = &*&i; //LEGAL

i = (*&)j; //ILEGAL

i = *&j; //LEGAL

i = &&j; //ILEGAL

q = *p;  //ILEGAL 

i = (*p) + *q; //LEGAL

    return 0;
}
