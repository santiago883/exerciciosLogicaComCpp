#include<iostream>
int main(){

    int num;

    printf("escreva um numero: ");
    scanf("%d", &num);

    int res = (num % 2);

    if(res == 0){
        printf("1 \n");
    }else{
        printf("0\n");
    }

    return 0;
}