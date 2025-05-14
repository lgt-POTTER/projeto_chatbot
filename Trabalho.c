#include <stdio.h>
#include <string.h>

void analisarExpressao(const char *expressao) {
    printf("Expressão analisada: %s\n", expressao);

    // Análise baseada em padrões simples
    if (strstr(expressao, "for") && strstr(expressao, "i<n") && !strstr(expressao, "j<")) {
        printf("Tipo: Laço for simples\n");
        printf("Complexidade de tempo: O(n)\n");
        printf("Descrição: Executa um laço linear de 0 até n-1\n");
        printf("Tempo estimado: Cresce linearmente com n\n");
        printf("Memória estimada: Constante (O(1))\n");
    } else if (strstr(expressao, "for") && strstr(expressao, "i<n") && strstr(expressao, "j<n")) {
        printf("Tipo: Laço for aninhado\n");
        printf("Complexidade de tempo: O(n^2)\n");
        printf("Descrição: Dois laços for aninhados, cada um de 0 até n-1\n");
        printf("Tempo estimado: Cresce quadraticamente com n\n");
        printf("Memória estimada: Constante (O(1))\n");
    } else if (strstr(expressao, "while")) {
        printf("Tipo: Laço while\n");
        printf("Complexidade de tempo: O(?) depende da condição\n");
        printf("Descrição: Laço condicional, depende da lógica da condição\n");
        printf("Tempo estimado: Indefinido sem mais contexto\n");
        printf("Memória estimada: Constante (O(1)) se não houver alocação\n");
    } else if (strstr(expressao, "recursiva") || strstr(expressao, "recursão")) {
        printf("Tipo: Função recursiva\n");
        printf("Complexidade de tempo: O(2^n) (exemplo genérico)\n");
        printf("Descrição: Função que chama a si mesma\n");
        printf("Tempo estimado: Cresce exponencialmente\n");
        printf("Memória estimada: O(n) para chamadas empilhadas\n");
    } else {
        printf("Expressão não reconhecida ou não suportada\n");
    }
}

int main() {
    char expressao[200];

    printf("Digite uma expressão de código (ex: for(i=0;i<n;i++)):\n");
    fgets(expressao, sizeof(expressao), stdin);

    // Remover o \n
    expressao[strcspn(expressao, "\n")] = 0;

    analisarExpressao(expressao);
    return 0;
}
