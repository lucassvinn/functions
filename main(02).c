#include <stdio.h>

int calculo(int x, int y, int z) {
    z = x + y;
}

int main()
{
    int valor1, valor2, valor3;
    
    printf("Informe 1: ");
    scanf("%d", &valor1);
    printf("Informe 2: ");
    scanf("%d", &valor2);
    
    valor3 = calculo(valor1, valor2, valor3);
    
    printf("Resultado: %d", valor3);

    return 0;
}
