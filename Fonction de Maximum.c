#include <stdio.h>

int max(int num1, int num2);

int main(){
    int num1, num2, maximum;
    printf("Entre le premiere nombre: ");
    scanf("%d", &num1);
    printf("Entre le deuxieme nombre: ");
    scanf("%d", &num2);
    maximum = max(num1, num2);
    printf("\nMaximum = %d\n", maximum);
    return 0;
}

int max(int num1, int num2){
    return (num1 > num2 ) ? num1 : num2;
}