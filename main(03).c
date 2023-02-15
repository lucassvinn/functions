#include <stdio.h>

float calcmedia(char letra, float valor_1, float valor_2, float valor_3,  float calculo) {
    if (letra == 'A') {
        calculo = (valor_1 + valor_2 + valor_3) / 3;
        printf("O valor é de: %.2f", calculo);
    } else if (letra == 'B') {
        calculo = ((valor_1 * 5) + (valor_2 * 3) + (valor_3 * 2)) / 3;
        printf("O valor é de: %.2f", calculo);
    }
}

int main() {
    float x, y, z, w, m, v;
    char l;
    
    printf("Informe uma letra: ");
    scanf("%c", &l);
    printf("Informe um valor: ");
    scanf("%f", &x);
    printf("Informe um valor: ");
    scanf("%f", &y);
    printf("Informe um valor: ");
    scanf("%f", &z);
    
    m = calcmedia(l, x, y, z, m);
    
    return 0;
}
