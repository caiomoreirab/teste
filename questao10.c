// Faça um algoritmo para receber uma matriz armazenada em um vetor e retornar: 
//0 – Se for um Matriz Quadrada; 
//1 – Se for uma Matriz quadrada simétrica; 
//2 – Se for uma Matriz quadrada Matriz Diagonal; 
//3 – Se é uma Matriz quadrada Assimétrica; 
//4 - Se é uma Matriz quadrada Simétrica; 
 
//ProtóZpo: int TipodeMatriz(int *ma, int n, int m)



int TipodeMatriz(int *ma, int n, int m) {
    // Verifica se não é uma matriz quadrada
    if (n != m) {
        return -1; // Não é uma matriz quadrada
    }

    int simetrica = 1; // Assume inicialmente que é simétrica
    int diagonal = 1;  // Assume inicialmente que é diagonal

    // Verifica as propriedades da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int valorAtual = *(ma + i * m + j); // Acessa o elemento da matriz
            
            // Verifica se não é simétrica
            if (valorAtual != *(ma + j * m + i)) {
                simetrica = 0;
            }
            
            // Verifica se não é diagonal (fora da diagonal principal é diferente de zero)
            if (i != j && valorAtual != 0) {
                diagonal = 0;
            }
        }
    }

    // Avaliação final baseada nas propriedades
    if (diagonal) {
        return 2; // Matriz Diagonal
    }
    if (simetrica) {
        return 1; // Matriz Simétrica
    }
    if (simetrica == 0 && diagonal == 0) {
        return 0; // Matriz apenas quadrada
    }
    return 3; // Matriz Assimétrica
}
