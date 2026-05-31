#include <stdio.h>

// Função que recebe um ponteiro e dobra o valor da variável original
void dobrar(int *numero) {
    // Multiplica o conteúdo apontado por 'numero' por 2
    *numero = *numero * 2; 
    
}

int main() {
    int valor;

    // Solicita o valor ao usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    // Exibe o valor antes da alteração
    printf("\nValor original: %d\n", valor);

    // Chama a função passando o endereço da variável valor
    dobrar(&valor);

    // Exibe o valor após a execução da função
    printf("Valor apos chamar a funcao dobrar: %d\n", valor);

    return 0;
}
