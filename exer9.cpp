#include<iostream>
int main(){

    int num;

    printf("digite um numero! ");
    scanf("%d", &num);

    printf("%d \n",(num >= 0 && num % 2 == 0));

    return 0;
}