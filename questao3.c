//Faça um algoritmo que recebe os inteiros n, m, p e q, e as matrizes ma e mb, 
//armazenadas como vetor de vetores (vma e vmb) . O algoritmo retorna a matriz 
//alocada como vetor de vetores mc com o resultado do produto entre as duas 
//matrizes ma e mb se ele for possível, retornando NULL caso contrário. 


//ProtóZpo: int **MultMatrixArmazenadaVetor ( int n, int m, int p, int q, float **vma, 
//float **vmb)




float **MultMatrixArmazenadaVetor ( int n, int m, int p, int q, float **vma, 
float **vmb) {
    float** mc = (float**)malloc(sizeof(float*) * n);
    if (mc == NULL) {
        return 0;
    }

    if (m != p) {
        printf("Não é possível multiplicar");
        return NULL;

    }

    for (int i = 0; i < n; i++) {
        mc[i] = (float *)malloc(q * sizeof(float));
        if (mc[i] == NULL) {
            printf("Erro ao alocar memória para a matriz resultante.\n");
            // Libera a memória já alocada
            for (int k = 0; k < i; k++) {
                free(mc[k]);
            }
            free(mc);
            return NULL;
        }
    }
    
    for (int i =0; i <n; i++) {
        for (int j =0; j < p; j++) {
            mc[i][j] = 0;
            for (int k = 0; k < m; k++) {
                mc[i][j] += vma[i][k] * vmb[k][j];
            }

        }
    }

    return mc;

}