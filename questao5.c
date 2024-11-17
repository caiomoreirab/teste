//Faça um algoritmo que recebe um vetor de n números reais e uma matriz com m 
//linhas e p colunas, de números reais armazenada no vetor vmat, e imprime em 
//quais posições da matriz (linha e coluna) o valor é igual a um dos valores do vetor 
//(imprime também a posição do vetor). 
//ProtóZpo: fint CmpVectorMatrix ( int n, int m, int p, float *vet, loat *vmat)

void CmpVectorMatrix ( int n, int m, int p, float *vet, float *vmat) {

for (int i=0; i < m; i++) {
    for (int j=0; j < p; j++) {
        for (int k=0; k < n; k++) {
                if (vmat[i * p + j] == vet[k]) {
                    printf("Valor %.2f encontrado: vetor[%d], matriz[%d][%d]\n", vet[k], k, i, j);
                }
            }
        }
    }
}
    
#include <stdio.h>

void CmpVectorMatrix(int n, int m, int p, float *vet, float *vmat);

int main() {
    int n = 3, m = 2, p = 3;
    float vet[] = {1.5, 2.5, 3.5};
    float vmat[] = {1.0, 1.5, 2.0, 2.5, 3.0, 3.5};

    CmpVectorMatrix(n, m, p, vet, vmat);

    return 0;
}
