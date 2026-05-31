#include <stdio.h>
#include <string.h>

// Função que inverte a string utilizando dois ponteiros
void inverterString(char *str) {
    // Se a string for vazia, não há o que inverter
    if (str == NULL || *str == '\0') {
        return;
    }

    char *inicio = str;           // Aponta para o primeiro caractere
    char *fim = str + strlen(str) - 1; // Aponta para o último caractere (antes do '\0')
    char aux;                     // Variável auxiliar para a troca

    // Enquanto os ponteiros não se cruzarem no meio da string
    while (inicio < fim) {
        // Troca os caracteres de lugar (lógica clássica de inversão)
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        // Move os ponteiros em direção ao centro
        inicio++; // Avança para a direita
        fim--;    // Recua para a esquerda
    }
}

int main() {
    char texto[100];

    printf("Digite uma palavra ou frase: ");
    // Lê a string do teclado (usando formato que remove o '\n' gerado pelo Enter)
    scanf("%99[^\n]", texto);

    printf("\nString original: %s\n", texto);

    // Chama a função de inversão
    inverterString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}
