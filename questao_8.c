#include <stdio.h>

// Função que calcula as 4 operações básicas e armazena os resultados via ponteiros
void calcular(float num1, float num2, float *soma, float *sub, float *mult, float *div) {
    *soma = num1 + num2;
    *sub  = num1 - num2;
    *mult = num1 * num2;

    // Validação para evitar a divisão por zero
    if (num2 != 0.0f) {
        *div = num1 / num2;
    } else {
        *div = 0.0f; // Define um valor padrão ou de erro (pode ser ajustado)
    }
}

int main() {
    float n1, n2;
    float rSoma, rSub, rMult, rDiv;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    // Chamamos a função passando os valores normais (n1, n2) 
    // e os ENDEREÇOS (&) das variáveis que vão guardar as respostas
    calcular(n1, n2, &rSoma, &rSub, &rMult, &rDiv);

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Soma:           %.2f\n", rSoma);
    printf("Subtracao:      %.2f\n", rSub);
    printf("Multiplicacao:  %.2f\n", rMult);
    
    // Tratamento visual caso o usuário tenha tentado dividir por zero
    if (n2 != 0.0f) {
        printf("Divisao:        %.2f\n", rDiv);
    } else {
        printf("Divisao:        Erro! Impossivel dividir por zero.\n");
    }

    return 0;
}
