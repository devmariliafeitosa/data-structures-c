
#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *p = &a;

    *p = 30;
    p = &b;
    *p = 50;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
