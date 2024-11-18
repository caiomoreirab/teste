//8. Faça um algoritmo para receber a matriz Anxm, armazenada como um vetor de 
//vetores vma, os inteiros n e m, e retornar uma matriz armazenada como vetor de 
//vetores com a transposta da Matriz A. 
//ProtóZpo: int *transposta(int *vma, int n, int m) 

int *transposta(int *vma, int n, int m)  {


    int* vmb = (int*)malloc(sizeof(int*) * n * m);
    if (vmb == NULL) {
        return NULL;
    }


    for (int i = 0; i < n; i++) {
        for (int j =0; j < m; j++) {
            vmb[j * n + i] = vma[i * m + j];
        }
    }

    return vmb;


}