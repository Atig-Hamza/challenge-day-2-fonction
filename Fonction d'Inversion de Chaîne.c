#include <stdio.h>
#include <string.h>

void inverser_chaine(char *chaine){
    int debut = 0, fin = strlen(chaine) - 1;
    while (debut < fin) {
        char temp = chaine[debut];
        chaine[debut++] = chaine[fin];
        chaine[fin--] = temp;
    }
}

int main(){
    char chaine[100];
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strcspn(chaine, "\n")] = '\0';
    inverser_chaine(chaine);
    printf("Chaîne inversée : %s\n", chaine);
    return 0;
}