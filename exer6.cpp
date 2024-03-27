#include<iostream>
int main(){

    int ano;

    printf("digite um ano para ver se ele é bissexto! ");
    scanf("%d", &ano);

    printf("%d \n",(ano % 4 == 0 && ano % 100 != 0 || ano % 100 != 0 && ano % 400 == 0 ));
    

    return 0;
}