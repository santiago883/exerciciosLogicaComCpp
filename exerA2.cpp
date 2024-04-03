
#include<iostream>
int main(){
    int A, B;

    printf("digite um numero para atribuir a A: \n");
    scanf("%d", &A );
    printf("digite outro numero para atribuir a B: \n");
    scanf("%d", &B );

    if(A > B){
        printf("o numero A é maior que B!\n");
    }else if(A < B){
        printf("o numero A é menor B!\n");
    }else if (A = B){
        printf("o numero A é igual B!\n");
    }

    

}