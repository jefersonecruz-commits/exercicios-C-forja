//inclui a biblioteca stdio.h quer permiteusar entrada e saida de infos.(printf e scanf)
#include<stdio.h>

//inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>

//declarar a função principal, onde o programa começa sua execução 
int main(){
   
    float num1, num2, respMult;

    printf("digite o primeiro numero: ");
    scanf("%f" , &num1);

    printf("digite o segundo numero: ");
    scanf("%f" , &num2);

    respMult = num1 * num2;

    printf("%.2f" ,respMult);

    //pausar o sistema até que o usuario pressione qualquer tecla 
    system("pause");
    //finalizando programa retornando a 0, indicando que tudo ocorreu bem
    return 0;
}