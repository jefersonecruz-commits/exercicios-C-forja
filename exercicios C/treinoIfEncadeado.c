#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char sexo; 
    int idade;

    printf("qual a idade?: ");
    scanf("%d", &idade);
    print("digit m para amsculino e f para feminino");
    scanf("%c", &sexo);

    if (sexo == 'm'){
        if(idade >= 16);
        printf("pode comprar ingressos. \n");
    }else{

    }
        printf("pode comprar ingressos. \n");
    else{
        
    }
    
    system("pause");
    return 0;
}