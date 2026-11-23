
#include <stdio.h>

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};

typedef struct aluno Aluno;

float media_turma(int n, Aluno** turmas, char turma) {
    float soma = 0;
    float media;
    int quantidade = 0;

    for (int i = 0; i < n; i++) {
        if (turmas[i]->turma == turma) {
            media = (turmas[i]->p1 +
                     turmas[i]->p2 +
                     turmas[i]->p3) / 3;

            soma += media;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        return soma / quantidade;
    }

    return 0;
}

int main() {
    Aluno alunos[3] = {
        {"Ana", "2026001", 'A', 8.0, 7.0, 9.0},
        {"Carlos", "2026002", 'B', 5.0, 6.0, 4.0},
        {"Maria", "2026003", 'A', 9.0, 8.0, 10.0}
    };

    Aluno* turmas[3] = {
        &alunos[0],
        &alunos[1],
        &alunos[2]
    };

    char turma;

    printf("Digite a turma (A ou B): ");
    scanf(" %c", &turma);

    printf("Media da turma %c: %.2f\n",
           turma, media_turma(3, turmas, turma));

    return 0;
}
