#include<iostream>
int main(){

    int l1, l2, l3;
    printf("digite um numero ");
    scanf("%d", &l1);
    printf("digite outro numero ");
    scanf("%d", &l2);
    printf("digite mais numero ");
    scanf("%d", &l3);

    printf("%d \n", (l1 + l2 > l3));
    
    return 0;
}