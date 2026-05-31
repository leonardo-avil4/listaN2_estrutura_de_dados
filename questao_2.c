#include <stdio.h>

// Função que encontra o maior e o menor elemento usando ponteiros
void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    // Inicializa o maior e o menor com o primeiro elemento do array
    *maior = array[0];
    *menor = array[0];

    // Percorre o array a partir do segundo elemento (índice 1)
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i]; // Atualiza o valor apontado por 'maior'
        }
        if (array[i] < *menor) {
            *menor = array[i]; // Atualiza o valor apontado por 'menor'
        }
    }
}

int main() {
    int tamanho;

    // Define o tamanho do array
    printf("Digite a quantidade de elementos do array: ");
    scanf("%d", &tamanho);

    // Cria o array com o tamanho informado
    int valores[tamanho];

    // Preenche o array com dados do usuário
    printf("Digite os %d numeros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &valores[i]);
    }

    // Declara as variáveis que vão receber os resultados
    int maiorElemento, menorElemento;

    // Chamamos a função passando:
    // 1. O array (que já funciona como um ponteiro para o primeiro elemento)
    // 2. O tamanho dele
    // 3. Os endereços (&) das variáveis que vão guardar o maior e o menor valor
    encontrarMaiorMenor(valores, tamanho, &maiorElemento, &menorElemento);

    // Exibe os resultados obtidos
    printf("\n--- Resultados ---\n");
    printf("O maior elemento e: %d\n", maiorElemento);
    printf("O menor elemento e: %d\n", menorElemento);

    return 0;
}
