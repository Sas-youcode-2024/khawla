#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char* jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    srand(time(NULL));
    int r = rand() % 7;
    
    printf("Le jour aléatoire est : %s", jours[r]);
        
    return 0;
}
