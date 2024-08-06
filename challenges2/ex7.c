#include <stdio.h>

int main() {
    float m;

    printf("Donner la moyenne : ");
    scanf("%f", &m);
    
    if (m < 10)
        printf("Récalé");
        
    else if (m < 12)
        printf("Passable");
        
    else if (m < 14)
        printf("Assez bien");
        
    else if (m < 16)
        printf("Bien");
        
    else
        printf("Très bien");
        
    return 0;
}
