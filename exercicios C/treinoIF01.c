#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float sal;
    printf("qual seu salario?: ");
    fflush(stdin);
    scanf("%f", &sal);

    if(sal > 5000 ){
        printf("seu salario é maior que r$5.000,00");
    }else{
     printf("seu salario é menor que r$5.000,00");
    }

    system("pause");
    return 0;
}