
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

void imprime_aprovados(int n, Aluno** turmas) {
    float media;

    for (int i = 0; i < n; i++) {
        media = (turmas[i]->p1 +
                 turmas[i]->p2 +
                 turmas[i]->p3) / 3;

        if (media >= 7.0) {
            printf("\nMatricula: %s", turmas[i]->matricula);
            printf("\nNome: %s", turmas[i]->nome);
            printf("\nTurma: %c", turmas[i]->turma);
            printf("\nMedia: %.2f\n", media);
        }
    }
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

    printf("ALUNOS APROVADOS:\n");

    imprime_aprovados(3, turmas);

    return 0;
}
