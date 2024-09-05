#include<stdio.h>

int somme(int a, int b){
   int res;
   res = a + b;
   return res;
}
 
int main(){
   int a, b, res;
   printf("Entrez deux nombres à additionner\n");
   printf("premiere nombre: ");
   scanf("%d", &a);
   printf("deuxieme nombre: ");
   scanf("%d", &b);
   res = somme(a, b);
   printf("La somme des deux nombres est = %d\n", res);
   return 0;
}