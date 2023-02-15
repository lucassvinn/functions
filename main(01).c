#include <stdio.h>

char option(char opa) {
    switch (opa) {
        case 'a':
            printf("Você selecionou A!");
        break;
        case 'b':
            printf("Você escolheu B!");
        break;
    }
}

int main()
{
    char xarx, z;
    
    printf("Informe X: ");
    scanf("%c", &xarx);
    
    z = option(xarx);

    return 0;
}
