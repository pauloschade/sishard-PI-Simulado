// Questao 04
// Implemente aqui uma funcao chamada ex4_solucao
int ex4_solucao(int rdi[], int rsi[], int edx) {
    int eax;
    for (int ecx = 0; ecx < edx; ecx++) {
        eax = edx - ecx - 1;

        if(rdi[ecx] != rsi[eax]) {
            return eax;
        }
    }

    return -1;
}