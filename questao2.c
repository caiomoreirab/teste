//Fazer um algoritmo que recebe dois números inteiros N e M, aloca dois vetores de 
//inteiros dinamicamente com n e m posições respecZvamente, lê os n números do 
//teclado, coloca nas n posições do vetor, aloca um vetor e retorna o vetor C:  


//a) C é o resultado da união do vetor A com o vetor B 
//ProtóZpo: int *UniaoVetores(int *v, int n) 
#include <stdio.h>
#include <stdlib.h>
int *UniaoVetores(int m, int n) {


    int* v1 =  (int*)malloc(sizeof(int) * n);
    int* v2 =  (int*)malloc(sizeof(int) *m);
    int* vc =  (int*)malloc((sizeof(int)*(n+m)));


    // Verificação das alocações
    if (v1 == NULL || v2 == NULL || vc == NULL) {
        printf("Erro de alocação de memória!\n");
        free(v1); // Libera se for necessário
        free(v2);
        free(vc);
        return NULL; // Indica falha
    }

    for (int i=0; i < n; i++) {
        printf("Valor na posição: ");
        scanf("%d", &v1[i]);
    }

    for (int j=0; j < m; j++) {
        printf("Valor na posição: ");
        scanf("%d", &v2[j]);
    }


    for (int i = 0; i < n; i++) {
        vc[i] = v1[i];
    }
    for (int i = 0; i < m; i++) {
        vc[n + i] = v2[i];
    

    }

    return vc;


}




// b) C é o resultado da interseção do vetor A com o vetor B
// ProtóZpo: int *InterseçãoVetores(int *v, int n)

int* InterseccaoVetores(int n, int m) {
    // Alocação dinâmica dos vetores
    int* v1 = (int*)malloc(sizeof(int) * n);
    int* v2 = (int*)malloc(sizeof(int) * m);
    int* vc = (int*)malloc(sizeof(int) * (n < m ? n : m)); // Tamanho máximo é o menor vetor

    // Verificação das alocações
    if (v1 == NULL || v2 == NULL || vc == NULL) {
        printf("Erro de alocação de memória!\n");
        free(v1); // Libera se for necessário
        free(v2);
        free(vc);
        return NULL; // Indica falha
    }

    // Leitura dos elementos do vetor v1
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    // Leitura dos elementos do vetor v2
    for (int j = 0; j < m; j++) {
        printf("Digite o valor para v2[%d]: ", j);
        scanf("%d", &v2[j]);
    }

    // Interseção dos vetores
    int k = 0; // Índice para o vetor vc
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v1[i] == v2[j]) {
                // Verificar se o elemento já está em vc
                int repetido = 0;
                for (int l = 0; l < k; l++) {
                    if (vc[l] == v1[i]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    vc[k++] = v1[i];
                }
            }
        }
    }

    // Liberar memória dos vetores originais
    free(v1);
    free(v2);

    // Redimensionar o vetor vc para o tamanho real
    vc = (int*)realloc(vc, sizeof(int) * k);

    return vc; // Retorna o vetor com a interseção
}






// c) C é o resultado da intercalação do vetor A com o vetor B;
// ProtóZpo: int *IntercalaçãoVetores(int *v, int n)




int* IntercalacaoVetores(int* v1, int n, int* v2, int m) {
    // Aloca espaço para o vetor intercalado
    int* vc = (int*)malloc((n + m) * sizeof(int));
    if (vc == NULL) {
        printf("Erro de alocação de memória!\n");
        return NULL;
    }

    // Índices para v1, v2 e vc
    int i = 0, j = 0, k = 0;

    // Intercalando os elementos
    while (i < n && j < m) {
        vc[k++] = v1[i++];
        vc[k++] = v2[j++];
    }

    // Adiciona os elementos restantes de v1, se existirem
    while (i < n) {
        vc[k++] = v1[i++];
    }

    // Adiciona os elementos restantes de v2, se existirem
    while (j < m) {
        vc[k++] = v2[j++];
    }

    return vc;
}


// d) C contém os elementos 1, 3, 5.. de A;
// ProtóZpo: int *ElemEmPosicaoImparNoVetor(int *v, int n)
int* ElemEmPosicaoImparNoVetor(int* v, int n, int* tamC) {
    // Calcula o tamanho do vetor de saída (aproximadamente n / 2)
    *tamC = (n + 1) / 2;

    // Aloca memória para o vetor de saída
    int* vc = (int*)malloc((*tamC) * sizeof(int));
    if (vc == NULL) {
        printf("Erro de alocação de memória!\n");
        return NULL;
    }

    // Copia os elementos de posições ímpares para o vetor de saída
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Posição ímpar no índice humano (1, 3, 5...)
            vc[k++] = v[i];
        }
    }

    return vc;
}




// e) C contém os elementos 0, 2, 4.. de B.
// ProtóZpo: int *ElemEmPosicaoParNoVetor (int *v, int n)


int* ElemEmPosicaoParNoVetor(int* v, int n, int* tamC) {
    // Calcula o tamanho do vetor de saída (aproximadamente n / 2)
    *tamC = n / 2;

    // Aloca memória para o vetor de saída
    int* vc = (int*)malloc((*tamC) * sizeof(int));
    if (vc == NULL) {
        printf("Erro de alocação de memória!\n");
        return NULL;
    }

    // Copia os elementos de posições pares para o vetor de saída
    int k = 0;
    for (int i = 1; i < n; i++) {
        if (i % 2 != 0) { // Posição par no índice humano (0, 2, 4...)
            vc[k++] = v[i];
        }
    }

    return vc;
}

