#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, AB;
    
    printf("Donner les coordonnées du point A (x1,y1) : ");
    scanf("%f %f", &x1, &y1);

    printf("Donner les coordonnées du point B (x2,y2) : ");
    scanf("%f %f", &x2, &y2);

    AB = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("AB = %.2f", AB);
    
    return 0;
}
