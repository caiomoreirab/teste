//12. Faça um algoritmo para receber uma matriz armazenada em um vetore retornar: 

//-1– Se não for uma Matriz quadrada; 
//0 – Se for um Matriz Quadrada; 
//1 – Se for uma Matriz quadrada simétrica; 

//ProtóZpo: int TipodeMatrizSimétrica(int *ma, int n, int m) 
int TipodeMatrizSimétrica(int *ma, int n, int m) {

    if (n != m) {
        return -1;
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) { 
            if (*(ma + i * m + j) != *(ma + j * m + i)) {
                return 0; // Não é simétrica
            }
        }
    }

    return 1;
}
