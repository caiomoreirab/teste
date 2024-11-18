





//1. Faça um algoritmo que recebe um número inteiro n, e um vetor de inteiros com n
//posições e retorna a soma dos números lidos percorrendo o vetor.
//ProtóSpo: int SomaElmVetor(int *v, int n)

// a) Imprime o maior valor do vetor;
// ProtóZpo: void ImprimeMaiorValor (int n);

#include <stdio.h>                                                                                                             

int SomaElmVetor(int *v, int n) {
    int i = 0;
    int soma = 0;
    while (i < n){
        soma += v[i];
        i++;
    }
    return soma;
}



int main() {
    int vetor[] = {1, 2, 3, 4, 5}; // Exemplo de vetor
    int n = 5; // Número de elementos no vetor

    int resultado = SomaElmVetor(vetor, n);
    printf("A soma dos elementos do vetor é: %d\n", resultado);

    return 0;
}





// b) Imprime a soma dos números;
// ProtóZpo: void ImprimeSomaDosNumeros (int n);

#include <stdio.h>
#include <stdlib.h>

void imprimeSomaDosNumeros(int n) {

    int *v = (int *)malloc(sizeof(int) * n);
    
    if (v == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do vetor na posição %d: ", i);
        scanf("%d", &v[i]);
    }

    int contSoma = 0;
    for (int i = 0; i < n; i++) {
        contSoma += v[i];
    }


    printf("Soma dos valores do vetor: %d\n", contSoma);
    free(v);
}










// c) Imprime o elemento da posição teto (n/2)
// ProtóZpo: void ImprimeElementoDoMeio (int n);


void ImprimeElementoDoMeio (int n) {
    int *v = (int *)malloc(sizeof(int) * n);
    
    if (v == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do vetor na posição %d: ", i);
        scanf("%d", &v[i]);
    }

    int pos = (n + 1) / 2 - 1; // Posição do meio
    
    printf("Elemento da posição teto(n/2): %d\n", v[pos]);

    free(v);
}


