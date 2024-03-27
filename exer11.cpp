#include<iostream>
int main(){
    int base, altura;

    printf("digite a base do triangulo! ");
    scanf("%d", &base);
    printf("digite a altura do triangulo! ");
    scanf("%d", &altura);

    printf("%d \n", ((base * altura) / 2));

    return 0;
}