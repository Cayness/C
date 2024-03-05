
int main()
{
    int numero = 42; //variavel inteira
    int *ponteiro; //variavel tipo ponteiro
    ponteiro = &numero;
    
    printf("Valor original de numero: %d\n", numero);
    printf("Endereço de memoria variavel numero: %p\n", &numero);
    printf("Valor apontado pela variavel ponteiro: %d\n", *ponteiro);
    
    return 0;
}
