#include <stdio.h>

int main()
{
    char *ptr;
    int i;
    char vet[5] = {'a', 'b', 'c', 'd', 'e'};
    
    ptr = vet; // o ponteiro guarda o endereço da primeira posicao dovtor 
   
    for(i=0; i < 5; i++){
        printf("\nVet[%d] = %c  ptr = %c", i, vet[i], *ptr);
        ptr++;
    }
    return 0;
}
