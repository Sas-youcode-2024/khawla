#include <stdio.h>
#include <math.h>

int main() {
    float r, c;

    printf("Donner la valeur du rayon : ");
    scanf("%f", &r);

    c = 2 * M_PI * r;
    printf("C = %.2f", c);
    
    return 0;
}
