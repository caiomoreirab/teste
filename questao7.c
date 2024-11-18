//7. Faça algoritmo que recebe uma matriz ANxMxP(volume) armazenado no vetor vola, 
//os valores N, M e P e e retorna um vetor com: 


//a) Os elementos da linha I da fatia K. 
//ProtóZpo: int *DevolveVetorLinhaIFaZaK (int *VolA, int N, int M, int P, int I, int K)

int *DevolveVetorLinhaIFaZaK (int *VolA, int N, int M, int P, int I, int K) {

    if (I < 0 || I >= N || K < 0 || K >= P) {
    printf("Erro: Linha ou fatia fora do intervalo.\n");
    return NULL;
    }

        int *linha = (int *)malloc(M * sizeof(int));
    if (!linha) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    // Preenche o vetor com os elementos da linha I na fatia K
    for (int j = 0; j < M; j++) {
        // Índice no vetor linear VolA
        int index = I * M * P + j * P + K;
        linha[j] = VolA[index];
    }

    return linha;
}



//b) Os elementos da coluna J da faZa K. 
//ProtóZpo: int *DevolverVetorColunaJFaZaK (int *VolA, int N, int M, int P, int j, int K); 

// Protótipo da função
int *DevolverVetorColunaJFaZaK(int *VolA, int N, int M, int P, int j, int K) {
    // Verifica se a coluna e a fatia são válidas
    if (j < 0 || j >= M || K < 0 || K >= P) {
        printf("Erro: Coluna ou fatia fora do intervalo.\n");
        return NULL;
    }

    // Aloca espaço para a coluna de N elementos
    int *coluna = (int *)malloc(N * sizeof(int));
    if (!coluna) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    // Preenche o vetor com os elementos da coluna j na fatia K
    for (int i = 0; i < N; i++) {
        // Índice no vetor linear VolA
        int index = i * M * P + j * P + K;
        coluna[i] = VolA[index];
    }

    return coluna;
}

 
//c) Os elementos da diagonal principal da fatia K. 
//ProtóZpo: int *DevolverVetorDiagonalfaZaK (int *VolA, int N, int M, int P, int K); 

int *DevolverVetorDiagonalfaZaK(int *VolA, int N, int M, int P, int K) {
    // A diagonal principal só existe se N e M forem iguais
    if (N != M || K < 0 || K >= P) {
        printf("Erro: Não é possível calcular a diagonal principal.\n");
        return NULL;
    }

    // Aloca espaço para a diagonal principal (N elementos)
    int *diagonal = (int *)malloc(N * sizeof(int));
    if (!diagonal) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    // Preenche o vetor com os elementos da diagonal principal
    for (int i = 0; i < N; i++) {
        int index = i * M * P + i * P + K; // Elemento (i, i, K)
        diagonal[i] = VolA[index];
    }

    return diagonal;
}

 
//d) Os elementos da linha I de todas as faZas. 
//ProtóZpo: int *DevolverVetorLinhaITodasFaZas (int *VolA, int N, int M, int P, int I, int K); 
 
int *DevolverVetorLinhaITodasFaZas(int *VolA, int N, int M, int P, int I) {
    // Verifica se a linha I é válida
    if (I < 0 || I >= N) {
        printf("Erro: Linha fora do intervalo.\n");
        return NULL;
    }

    // Aloca espaço para todas as fatias (M * P elementos)
    int *linha_fatias = (int *)malloc(M * P * sizeof(int));
    if (!linha_fatias) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    // Preenche o vetor com os elementos da linha I de todas as fatias
    for (int k = 0; k < P; k++) {
        for (int j = 0; j < M; j++) {
            int index = I * M * P + j * P + k;
            linha_fatias[k * M + j] = VolA[index];
        }
    }

    return linha_fatias;
}


//e) Os elementos (I, J) de todas as faZas. 
//ProtóZpo: int *DevolverVetorElmIJTodasasFaZas (int *VolA, int N, int M, int P, int I, int 
//K); 



int *DevolverVetorElmIJTodasasFaZas(int *VolA, int N, int M, int P, int I, int J) {
    // Verifica se os índices (I, J) são válidos
    if (I < 0 || I >= N || J < 0 || J >= M) {
        printf("Erro: Índices fora do intervalo.\n");
        return NULL;
    }

    // Aloca espaço para o elemento (I, J) de todas as fatias (P elementos)
    int *elementos_fatias = (int *)malloc(P * sizeof(int));
    if (!elementos_fatias) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    // Preenche o vetor com os elementos (I, J) de todas as fatias
    for (int k = 0; k < P; k++) {
        int index = I * M * P + J * P + k; // Elemento (I, J, K)
        elementos_fatias[k] = VolA[index];
    }

    return elementos_fatias;
}
