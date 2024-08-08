#include <stdio.h>

int main() {
    int choice, year, years;
    int days, months, hours, minutes, seconds;

    printf("Menu de conversion\n");
    printf("Choisissez une option (1-6): \n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("6. Bissextile ou non\n");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("Entrer le nombre d'années : ");
        scanf("%d", &years);
    
        switch (choice) {
            case 1:
                months = years * 12;
                printf("%d années = %d mois", years, months);
                break;
            case 2:
                days = years * 365;
                printf("%d années = %d jours", years, days);
                break;
            case 3:
                hours = years * 365 * 24;
                printf("%d années = %d heures", years, hours);
                break;
            case 4:
                minutes = years * 365 * 24 * 60;
                printf("%d années = %d minutes", years, minutes);
                break;
            case 5:
                seconds = years * 365 * 24 * 120;
                printf("%d années = %d secondes", years, seconds);
                break;
        }
    }
    else if (choice == 6){
        printf("Entrer l'année : ");
        scanf("%d", &year);
                
        if ((year % 4 == 0) && (year % 100 != 0))
            printf("Cette anée est bissextile");
        else if (year % 400 == 0)
                printf("Cette anée est bissextile");
        else
                printf("Cette année est non bissextile");
    }
    else
            printf("Choix invalide. Veuillez essayer à nouveau.");
    
    return 0;
}
