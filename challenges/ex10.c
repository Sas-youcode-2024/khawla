#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r;
    char* jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    
    srand(time(NULL));
    r = rand() % 7;
    
    printf("Le jour aléatoire est : %s", jours[r]);
        
    return 0;
}
