int main()
{
    int numeros[] = {23, 77, 56, 88, 90};
    int *ponteiroArray = numeros;
    printf("O primeiro elemento do vetor é %d\n", *ponteiroArray);
    printf("O segundo elemento do vetor é %d\n", *(ponteiroArray+1));
    printf("O quinto elemento do vetor é %d\n", *(ponteiroArray+4));
    
    return 0;
}