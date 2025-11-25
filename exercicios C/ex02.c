#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade;
    char pais[50], estado[20];
    printf("qual seu nome?: ");
    fgets(pais, 50, stdin);
    printf("qual seu nome?: ");
    fgets(estado, 50, stdin);
    printf("digite sua idade: ");
    scanf("%d",&pais);


    printf("olá %svoce tem %d anos . \n", pais,estado, idade);
    system("pause");
    return 0;
}