
#include <stdio.h>

typedef struct {
    float x;
    float y;
} Ponto;

int dentroRet(Ponto* v1, Ponto* v2, Ponto* p) {
    if (p->x >= v1->x && p->x <= v2->x &&
        p->y >= v1->y && p->y <= v2->y) {
        return 1;
    }

    return 0;
}

int main() {
    Ponto v1 = {0, 0};
    Ponto v2 = {10, 10};
    Ponto p;

    printf("Digite a coordenada x: ");
    scanf("%f", &p.x);

    printf("Digite a coordenada y: ");
    scanf("%f", &p.y);

    if (dentroRet(&v1, &v2, &p) == 1) {
        printf("O ponto esta dentro do retangulo.\n");
    } else {
        printf("O ponto esta fora do retangulo.\n");
    }

    return 0;
}
