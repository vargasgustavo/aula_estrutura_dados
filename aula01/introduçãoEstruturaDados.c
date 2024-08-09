#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    float salario;
    double altura;
    char tamanho;
    char nome[30];
    idade = 20;
    salario = 1.12345678901234567890;
    altura = 2.12345678901234567890;
    tamanho = 'x';
    strcpy(nome, "Gustavo Vargas");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Pretencao salarial: %f\n", salario);
    printf("Altura: %lf\n", altura);
    printf("Tamanho: %c\n", tamanho);
}
