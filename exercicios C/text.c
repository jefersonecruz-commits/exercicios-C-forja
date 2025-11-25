#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[50];

    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("o nome digitado foi: %s \n", nome);
    system("pause");
    return 0;
}