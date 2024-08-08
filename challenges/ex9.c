#include <stdio.h>

int main() {
    int jour, mois, annee;
    char* Nom [] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"};
    
    printf("Entrer une date (jour/mois/année) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    
    if (mois < 1 || mois >12)
        printf("mois invalide");
        
    else
        printf("%d-%s-%d", jour, Nom[mois - 1], annee);
        
    return 0;
}
