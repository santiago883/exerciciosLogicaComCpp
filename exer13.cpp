#include<iostream>
int main(){

    int hora;

    printf("digite um numero de horas quen deseja converter em horas: ");
    scanf("%d", &hora);

    printf("%d horas são %d segundos \n", hora, (hora * 3600));
    
    return 0;
}