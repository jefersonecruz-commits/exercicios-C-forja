#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void hello();
void by();

int main(){
    setlocale(LC_ALL, "portuguese");

    hello();
    by();


    system("pause");
    return 0;
}

void hello(){
    printf("hello");
}
void by(){
    printf(" by");
}