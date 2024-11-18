// Faça um algoritmo para receber uma Matriz armazenada como um vetor e retornar
// um vetor com os elementos da coluna “p” da matriz
// ProtóZpo: int * colunadaMatriz(int **ma, int n, int m, int p)


int* colunadaMatriz(int **ma, int n, int m, int p) {
    if (p < 0 || p >= m) {
        printf("Erro: coluna fora dos limites da matriz.\n");
        return NULL;
    }

    int* mb = (int*)malloc(sizeof(int) * n);
    if (mb == NULL) {
        printf("Erro: falha ao alocar memória.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        mb[i] = ma[i][p];
    }

    return mb;
}

