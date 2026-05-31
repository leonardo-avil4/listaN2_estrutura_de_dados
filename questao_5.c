#include <stdio.h>

// Função que copia a string de origem para o destino usando ponteiros
void copiarString(char *origem, char *destino) {
    // Enquanto o caractere apontado por origem não for o fim da string '\0'
    while (*origem != '\0') {
        *destino = *origem; // Copia o caractere atual da origem para o destino
        origem++;           // Avança o ponteiro da origem para o próximo caractere
        destino++;          // Avança o ponteiro do destino para o próximo caractere
    }
    
    *destino = '\0';
}

int main() {
    char textoOriginal[100];
    char textoCopia[100];

    // Lendo uma string do usuário (aceitando espaços)
    printf("Digite um texto para ser copiado: ");
    fgets(textoOriginal, sizeof(textoOriginal), stdin);

    // Chamando a função de cópia
    copiarString(textoOriginal, textoCopia);

    // Exibindo os resultados
    printf("\n--- Resultado da Copia ---\n");
    printf("Original: %s", textoOriginal);
    printf("Copia:    %s", textoCopia);

    return 0;
}
