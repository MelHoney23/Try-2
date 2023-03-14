#include <stdio.h>

int main(void)


{
    int valor;
    int preço;
    int oferta;

    printf("O valor sera?\n");
    scanf("%i", &valor);

    printf("o produto?\n");
    scanf("%i", &preço);

    oferta = valor * preço;

    printf("O valor de desconto = %i", oferta);


    return 0;
}
