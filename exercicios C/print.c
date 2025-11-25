//incluir bibloteca stdio h, permitre o uso de entradda e saida de valores como o print
#include<stdalign.h>
//inclui a biblioteca stdlib.h para funções utilitarias como o system
#include<stdlib.h>
//inicio da função,onde o programa começa a ser executado 
int main(){

    float num1 = 100.20;
    int num2 = 200;
    //printar o numero das variaveis 
    printf("%f %f", num1, num2);
    //pausar o programa,até que o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornando 0, indicando que deu tudo certo 
    return 0;
}