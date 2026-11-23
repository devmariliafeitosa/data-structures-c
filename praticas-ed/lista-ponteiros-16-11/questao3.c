
#include <stdio.h>

int main() {
    char texto[] = "IFCE";
    char *p = texto;

    printf("%c\n", *p);
    printf("%c\n", *(p + 1));
    printf("%c\n", *(p + 2));
    printf("%c\n", *(p + 3));

    *(p + 1) = 'P';

    printf("%s\n", texto);

    return 0;
}
