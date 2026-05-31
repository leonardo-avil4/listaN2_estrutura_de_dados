#include <stdio.h>

int main() {
    // 1. Declaração de variável do tipo inteiro e ponteiro para inteiro
    int numero = 42;
    int *ponteiro;

    // 2. Atribuição do endereço da variável ao ponteiro
    ponteiro = &numero;
    
    printf("a) Valor da variavel: %d\n", numero);
    
    printf("b) Endereco da variavel: %p\n", (void*)&numero);
    
    printf("c) Valor do ponteiro (endereco guardado): %p\n", (void*)ponteiro);
    
    printf("d) Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
