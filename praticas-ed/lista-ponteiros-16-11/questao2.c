
#include <stdio.h>

int main() {
    int vet[] = {10, 20, 30, 40, 50};
    int *p = vet;

    printf("a) %d\n", *p);
    printf("b) %d\n", *(p + 2));
    printf("c) %d\n", *(p + 4));
    printf("d) %d\n", *p + 2);
    printf("e) %d\n", (*p) + 2);

    p += 3;

    printf("f) %d\n", *p);

    return 0;
}
