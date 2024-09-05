#include <stdio.h>
#define MAX 10
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int topo;
} PILHA;

void inicializaPilha(PILHA *p) {
    p -> topo = -1;
}

int tamanhoPilha(PILHA *p) {
    return p -> topo+1;
}

void listaPilha(PILHA *p) {
    printf("Pilha [");
    int i;
    for (i = p -> topo; i >= 0; i--) {
        printf("%d ", p -> A[i].chave);
    }
    printf("]\n");
}

bool pushPilha(PILHA *p, REGISTRO reg) {
    if (p -> topo >= MAX -1) return false;
    // p -> topo++;
    // p -> A[p -> topo] = reg;
    p -> A[++p -> topo] = reg;
    return true;
}

int main() {
    PILHA p;
    REGISTRO r;
    inicializaPilha(&p);
    printf("Tamanho da pilha: %d\n", tamanhoPilha(&p));
    r.chave = 10;
    if (pushPilha(&p, r))
        printf("Elemento %d inserido com sucesso\n", r.chave);
    else
        printf("Erro! Pilha cheia\n");
    return 0;
}
