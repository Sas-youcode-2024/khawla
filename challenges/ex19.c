#include <stdio.h>

int Bissextile() {
    if (annee % 4 == 0)
            if (annee % 100 == 0)
                if (anee % 400 == 0)
                    printf("Cette anée est bissextile");
                else
                    printf("Cette anée est non bissextile");
            else
                printf("Cette anée est bissextile");
        printf("Cette anée est non bissextile");
    
    return 0;
}

int main() {
    int choix, annee;
    int jours, mois, heures, minutes, secondes;
    
    printf("Menu de conversion\n");
    printf("Choisissez une option (1-5): ");
    printf("1. Convertir l'année en mois\n");
    printf("2. Convertir l'année en jours\n");
    printf("3. Convertir l'année en heures\n");
    printf("4. Convertir l'année en minutes\n");
    printf("5. Convertir l'année en secondes\n");
    printf("6. Bissextile ou non\n");
    scanf("%d", &choix);
    
    printf("Entrer une année");
    scanf("%d", annee);
