# include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu Nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %f", altura);

        return 0;

}