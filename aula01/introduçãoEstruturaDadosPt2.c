#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    float salario;
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    double altura;
    printf("\nDigite sua altura: ");
    scanf("%lf", &altura);

    char tamanho;
    printf("\nDigite seu tamanho do uniforme: ");
    scanf(" %c", &tamanho);

    char nome[30];
    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    
    printf("\nNome: %s", nome);
    printf("Idade: %d", idade);
    printf("Pretencao salarial: %f", salario);
    printf("Altura: %lf", altura);
    printf("Tamanho: %c", tamanho);
}
