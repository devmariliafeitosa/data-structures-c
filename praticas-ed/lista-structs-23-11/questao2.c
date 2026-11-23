
#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vetor;

float dot(Vetor* v1, Vetor* v2) {
    return (v1->x * v2->x) +
           (v1->y * v2->y) +
           (v1->z * v2->z);
}

int main() {
    Vetor v1, v2;
    float resultado;

    printf("Digite as coordenadas do primeiro vetor:\n");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Digite as coordenadas do segundo vetor:\n");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    resultado = dot(&v1, &v2);

    printf("Produto escalar: %.2f\n", resultado);

    return 0;
}
