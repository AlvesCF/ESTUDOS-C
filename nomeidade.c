#include <stdio.h>

int main() {
    char nome[50];
    int idade, anoNascimento;
    int anoAtual = 2025;

    printf("=== Calculadora de Ano de Nascimento ===\n");

    // Solicita o nome do usu�rio
    printf("Digite seu nome: ");
    scanf("%49s", nome);

    // Solicita a idade do usu�rio
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Calcula o ano de nascimento
    anoNascimento = anoAtual - idade;

    // Exibe o resultado
    printf("\nOl�, %s! Voc� nasceu em aproximadamente %d.\n", nome, anoNascimento);

    return 0;
}

