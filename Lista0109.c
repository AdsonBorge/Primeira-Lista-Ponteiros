#include <stdio.h>
#include <stdlib.h>

//Resposta:
//1º código: imprime valores do vetor vet.
//2º código: imprime o hexadecimal referente aos enderecos de memoria do vetor.

void chamaValor(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){    
        printf("%d ",vet+i); 
    }
}
void chamaEndereco(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){    
        printf("%X ",vet+i);  
    }
}

int main(){
    chamaEndereco();
    chamaValor();   
}
