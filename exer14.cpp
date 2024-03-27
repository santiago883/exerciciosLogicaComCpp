#include<iostream>
int main(){

    int num, original, reverso = 0, resto;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    original = num;
    
    while (num != 0) {
        resto = num % 10;

        reverso = reverso * 10 + resto;
        num /= 10;
    }
    
    printf("%d\n", original == reverso);
    
    

    return 0;
}