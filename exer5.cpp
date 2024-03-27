#include<iostream>
int main(){

    float tem, con;

    printf("digite uma temperatura em celsius: ");
    scanf("%f", &tem);
    con = (tem * 9/5)+32;
    
    printf("A temperatura em Fahrenheit é %.2f \n", con);

    return 0;
}