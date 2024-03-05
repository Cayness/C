int main()
{
    // Declaração de Variáveis
    int num = 0;
    int cubo = 0;
    
    // Entrada de Dados
    printf("Digite um número: ");
    scanf("%d" , &num);

    //Processamento
    cubo = num*num*num;
    //cubo = pow(num,3);
    
    //Saída de Dados
    printf("\nCubo de %d = %d\n", num, cubo);
    
    return 0;
}
