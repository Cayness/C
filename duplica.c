#include <stdio.h>

void duplicaValor(int *x){
    *x *=2;
}

int main()
{
    int numero = 100;
    duplicaValor(&numero);
    printf("O valor Dobrado do numero é %d", numero);
    
    return 0;
}