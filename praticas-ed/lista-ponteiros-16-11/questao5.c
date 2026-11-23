
#include <stdio.h>

int main() {
    int vet[5];
    int *p = vet;
    int soma = 0;
    int maior;

    printf("Digite 5 numeros inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    maior = *p;

    for (int i = 0; i < 5; i++) {
        soma += *(p + i);

        if (*(p + i) > maior) {
            maior = *(p + i);
        }
    }

    printf("\nSoma dos elementos: %d\n", soma);
    printf("Maior elemento: %d\n", maior);

    return 0;
}
