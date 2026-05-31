#include <stdio.h>

// Função que recebe dois ponteiros para inteiros e troca seus valores
void trocarValores(int *a, int *b) {
    int aux; // Variável auxiliar armazena o valor temporariamente
    
    aux = *a; // aux guarda o valor de a
    *a = *b;  // o local de a recebe o valor apontado por b
    *b = aux; // o local de b recebe o valor guardado em aux
}

int main() {
    int num1, num2;

    // Leitura dos valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    // Exibe os valores originais
    printf("\nValores originais:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Chamada de função passando os endereços de cada variável
    trocarValores(&num1, &num2);

    // Exibe os valores após a troca
    printf("\nValores após a troca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
