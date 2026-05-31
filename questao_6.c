#include <stdio.h>
#include <ctype.h> // Biblioteca necessária para usar as funções tolower() e isalpha()

// Função que conta vogais e consoantes usando ponteiros
void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    // Inicializa as contagens apontadas como zero
    *vogais = 0;
    *consoantes = 0;

    // Percorre a string até o caractere final '\0'
    while (*str != '\0') {
        // Converte o caractere atual para minúsculo para simplificar a checagem
        char c = tolower(*str);

        // Verifica se o caractere é uma letra do alfabeto
        if (isalpha(c)) {
            // Se for uma das vogais
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vogais)++; // Incrementa o valor na memória da main
            } else {
                (*consoantes)++; // Se for letra e não for vogal, é consoante
            }
        }
        
        str++; // Avança o ponteiro para o próximo caractere da string
    }
}

int main() {
    char texto[100];
    int qtdVogais, qtdConsoantes;

    printf("Digite uma frase/palavra: ");
    // fgets é ideal para ler strings pois aceita espaços
    fgets(texto, sizeof(texto), stdin);

    // Chamamos a função passando a string e os ENDEREÇOS (&) das variáveis de contagem
    contarVogaisConsoantes(texto, &qtdVogais, &qtdConsoantes);

    // Exibe os resultados obtidos
    printf("\n--- Analise da String ---\n");
    printf("Numero de vogais: %d\n", qtdVogais);
    printf("Numero de consoantes: %d\n", qtdConsoantes);

    return 0;
}
