#include <stdio.h>
#include <math.h>

int main()
{
    int i, j;
    printf("Informe dois números (cada um sendo 0 ou 1)");
    scanf("%d%d", &i, &j);
    printf("%d AND %d é %d\n", i, j, i && j);
    printf("%d OR %d é %d\n", i, j, i || j);
    
    return 0;
}