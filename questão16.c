

//Faça um algoritmo para receber uma Matriz armazenada como um vetor de vetores  
//e retornar uma matriz armazenada como um vetor de vetores com o resultado da 
//mulZplicação de A por At (sua transposta) ou NULL caso a mulZplicação não seja 
//possível: 



//a-usando memória adicional (sem copiar a matriz A para uma outra matriz com sua 
//versão transposta); 
//ProtóZpo: int **mulZplicaPelaTranspostaA(int **ma,  int n, int m) 

#include <stdio.h>
#include <stdlib.h>


int **multiplicaPelaTranspostaA(int **ma, int n, int m) {
    if (ma == NULL || n <= 0 || m <= 0) {
        return NULL; 
    }


    // Aloca a matriz resultado (n x n)
    int **result = (int **)malloc(n * sizeof(int *));
    if (result == NULL) return NULL; 
    for (int i = 0; i < n; i++) {
        result[i] = (int *)malloc(n * sizeof(int));

        if (result[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(result[j]);
            }
            free(result);
            return NULL;
        }
    }

    // Calcula A * A^T
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < m; k++) {
                result[i][j] += ma[i][k] * ma[j][k];
            }
        }
    }

    return result; 
}




//b-sem usar memória adicional (copiando a matriz A para uma outra matriz com sua 
//versão transposta); 

#include <stdio.h>
#include <stdlib.h>


int **multiplicaPelaTranspostaSemMemoria(int **ma, int n, int m) {
    if (ma == NULL || n <= 0 || m <= 0) {
        return NULL; 
    }

    int **result = (int **)malloc(n * sizeof(int *));
    if (result == NULL) return NULL; 
    for (int i = 0; i < n; i++) {
        result[i] = (int *)malloc(n * sizeof(int));
        if (result[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(result[j]);
            }
            free(result);
            return NULL;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) { 
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += ma[i][k] * ma[j][k];
            }
            if (i != j) {
                result[j][i] = result[i][j];
            }
        }
    }

    return result; 
}

