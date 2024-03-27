#include<iostream>
int main(){

    int not1, not2, not3;

    int pes1, pes2, pes3;

    printf("digite a nota: ");
    scanf("%d", &not1);
    printf("digite o peso: ");
    scanf("%d", &pes1);
    printf("digite a nota: ");
    scanf("%d", &not2);
    printf("digite o peso: ");
    scanf("%d", &pes2);
    printf("digite a nota: ");
    scanf("%d", &not3);
    printf("digite o peso: ");
    scanf("%d", &pes3);

    printf("sua nota ponderada é %d", (not1 * pes1 + not2 * pes2 + not3 * pes3 ) / (pes1 + pes2 + pes3) );
    
    return 0;
}