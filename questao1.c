#include <stdio.h>
#include <stdlib.h>

//criar o vetor dentro da funçao 



void imprimeMaior(int n) {
    int* v = (int*)malloc(n * sizeof(int));


    if (v != NULL) {
        for (int i =0; i < n; i++ ){
        printf("Digite um valor para a posição:");
        scanf("%d", &v[i]);
    }
    int maior = v[0];

    for (int j = 1; j < n; j++) {
        if(v[j] > maior) {
            maior = v[j];
        }
    }

    printf("%d", maior);

    } else {
        printf("Error");
    }

}




int main() {
    imprimeMaior(6);

    return 0;
}