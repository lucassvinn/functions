#include <stdio.h>

int calc(int valor1, int valor2, int soma) {
    soma = valor1 + valor2;
    printf("%d", soma);
}

int main()
{
    int x, y, z;
    int calculo;
    
    printf("Autor do Codigo: LucasVinn :)\n");
    printf("Algoritmo para calcular preco do produto!\n\n");
    
    printf("Informe o preco do primeiro produto: ");
    scanf("%d", &x);
    printf("Informe o preco do segundo produto: ");
    scanf("%d", &y);
    
    calculo = calc(x, y, z);
    
    return 0;
}
