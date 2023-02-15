#include <stdio.h>

int calculo(int z, int x, int y) {
    z = x + y;
}

int main()
{
    int valor1, valor2, valor3;
    
    printf("Informe 1: ");
    scanf("%d", &valor1);
    printf("Informe 2: ");
    scanf("%d", &valor2);
    
    valor3 = calculo(valor3, valor1, valor2);
    
    printf("Resultado: %d", valor3);

    return 0;
}
