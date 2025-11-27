#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");

int i, n;

    printf("informe um numero para tabuada\n");
    scanf(" %d", &n);
    printf("\nT A B U A D A");
    printf("\n=============");

    for(i = 0;i <= 100;i++){
        printf("\n %d x %d = %d", n, i, (n * i));
    }
   
   
    printf("\n=============\n\n\n");

    system("pause");
}
