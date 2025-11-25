#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[50];

    printf("digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("o nome digitado foi: %s \n", nome);
    system("pause");
    return 0;
}