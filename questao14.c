//14. Faça um algoritmo para receber uma matriz armazenada em um vetor e retornar: 
//-1– Se não for uma Matriz quadrada; 
//0 – Se for um Matriz Quadrada; 
//1 – Se é uma Matriz quadrada Assimétrica; 


//ProtóZpo: int TipodeMatrizAssimétrica(int *ma, int n, int m)

#include <stdio.h>

int TipodeMatrizAssimétrica(int *ma, int n, int m) {
    if (n != m) { 
        return -1;
    }

    int assimetrica = 0; // simétrica

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (*(ma + i * m + j) != *(ma + j * m + i)) {
                assimetrica = 1; 
            }
        }
    }

    return assimetrica ? 1 : 0; 


            