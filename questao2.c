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




int main() {
    int n = 4; // Tamanho do primeiro vetor
    int m = 5; // Tamanho do segundo vetor

    int* resultado = UniaoVetores(m, n);

    // Verifica se o vetor foi criado corretamente
    if (resultado != NULL) {
        printf("Vetor combinado:\n");
        for (int i = 0; i < n + m; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");

        // Libera a memória do vetor combinado
        free(resultado);
    }

    return 0;
}

























 
//b) C é o resultado da interseção do vetor A com o vetor B 
//ProtóZpo: int *InterseçãoVetores(int *v, int n) 


#include <stdio.h>
#include <stdlib.h>
int *IntersecaoVetores(int m, int n) {


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
        for (int j = 0; j <m; j++) {

            for (int k=0; k < )
            if (v1[i] == v2[j]) {
                vc[n] = v[i];
            }
        }


    return vc;


}




int main() {
    int n = 4; // Tamanho do primeiro vetor
    int m = 5; // Tamanho do segundo vetor

    int* resultado = UniaoVetores(m, n);

    // Verifica se o vetor foi criado corretamente
    if (resultado != NULL) {
        printf("Vetor combinado:\n");
        for (int i = 0; i < n + m; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");

        // Libera a memória do vetor combinado
        free(resultado);
    }

    return 0;
}































 
//c) C é o resultado da intercalação do vetor A com o vetor B; 
//ProtóZpo: int *IntercalaçãoVetores(int *v, int n) 
 
//a) C contém os elementos 1, 3, 5.. de A; 
//ProtóZpo: int *ElemEmPosicaoImparNoVetor(int *v, int n) 
 
//b) C contém os elementos 0, 2, 4.. de B. 
//ProtóZpo: int *ElemEmPosicaoParNoVetor (int *v, int n)