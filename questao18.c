// 18. Faça um algoritmo para receber uma Matriz armazenada como um vetor e retornar
// um vetor vet com os elementos da linha l da matriz A
// ProtóZpo: int * linhadaMatriz(int **ma, int n, int m, int l)


int* linhadaMatriz(int** ma, int n, int m, int l) {
    if (l < 0 || l >= n) {
        printf("Erro: linha fora dos limites da matriz.\n");
        return NULL;
    }

    int* mb = (int*)malloc(sizeof(int) * m);
    if (mb == NULL) {
        printf("Erro: falha ao alocar memória.\n");
        return NULL;
    }

    for (int j = 0; j < m; j++) {
        mb[j] = ma[l][j];
    }

    return mb;
}
