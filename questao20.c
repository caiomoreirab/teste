// Faça um algoritmo para receber uma Matriz armazenada como um vetor e
// retornar um vetor com os elementos da diagonal principal da matriz
// ProtóZpo: int * diagonaldaMatriz(int **ma, int n, int m)

int* diagonaldaMatriz(int **ma, int n, int m) {


    if (n != m) {
    printf("Erro: A matriz não é quadrada.\n");
    return NULL;
    }

    int *mb = (int*)malloc(n * sizeof(int));
    if (mb == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        mb[i] = mb[i][i];
    }
    return mb;

}