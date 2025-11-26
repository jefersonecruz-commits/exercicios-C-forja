#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int age1, age2;

    printf("INFIRME A PRIMEIRA IDADE: ");
    fflush("stdin");
    scanf("%d", &age1);
    printf("INFIRME A SEGUNDA IDADE: ");
    fflush("stdin");
    scanf("%d", &age2);

    printf("\n");

    if(age1 > age2){
        printf("a maior idade é %d .\n", age1);
    }else if(age1 == age2){
        printf("as idades são iguais .\n");
    }else{
        printf("a menor idade é %d .\n", age2);
    }    

    system("pause");
    return 0;
}