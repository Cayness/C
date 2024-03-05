int main()
{
    int numero = 42; //Variável inteira
    int *ponteiro = &numero; // Atribuição do endereço de memória da variável número
    printf("Valor original de numero: %d\n", numero);
    *ponteiro = 100;
    printf("Valor de numero: %d\n", numero);
    
    return 0;
}