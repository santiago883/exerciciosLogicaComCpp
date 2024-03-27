#include<iostream>
int main(){

    int num;

    printf("digite um numero! ");
    scanf("%d", &num);

    printf("%d \n", ( num % 3 == 0 && num % 5 == 0));

    
    return 0;
}