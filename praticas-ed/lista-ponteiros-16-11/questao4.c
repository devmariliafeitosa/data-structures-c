
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("Antes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    trocar(&a, &b);

    printf("\nDepois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
