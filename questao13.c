//13. Faça um algoritmo para receber uma matriz armazenada em um vetore retornar: 
//-1– Se não for uma Matriz quadrada; 
//0 – Se for um Matriz Quadrada; 
//1 – Se for uma Matriz quadrada Matriz Diagonal; 


//ProtóZpo: int TipodeMatrizDiagonal(int *ma, int n, int m)

int TipodeMatrizDiagonal(int *ma, int n, int m) {

    if (n != m) {
        return -1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int valorAtual = *(ma + i * m + j);
            // Verifica se não é diagonal (fora da diagonal principal é diferente de zero)
            if (i != j && valorAtual != 0) {
            return 0;
            }
        }
    }

    return 1;





}