#include<stdio.h>

int multiplication(int a, int b){
   int mul;
   mul = a * b;
   return mul;
}
 
int main(){
   int a, b, mul;
   printf("Entrez deux nombres à multiplie\n");
   printf("premiere nombre: ");
   scanf("%d", &a);
   printf("deuxieme nombre: ");
   scanf("%d", &b);
   mul = multiplication(a, b);
   printf("Le resultats des deux nombres est = %d\n", mul);
   return 0;
}