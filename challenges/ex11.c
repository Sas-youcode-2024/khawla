#include <stdio.h>

int main() {
    int age;
    char nom[20], prenom[20], sexe, num[15];
    
    printf("Donner votre nom: ");
    scanf("%s", nom);
    
    printf("Donner votre prenom: ");
    scanf("%s", prenom);
    
    printf("Donner votre age: ");
    scanf("%d", &age);
    
    printf("Donner votre sexe (H/F): ");
    scanf(" %c", &sexe);
    
    printf("Donner votre numero de telephone: ");
    scanf("%s", num);
    
    printf("nom : %s\nprenom : %s\nage : %d\nsexe : %c\nnumero de telephone : %s", nom, prenom, age, sexe, num);
    return 0;
}
