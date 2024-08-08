#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, disc; 
    float x1, x2;

    printf("Donner la valeur de a : ");
    scanf("%d", &a);
    
    printf("Donner la valeur de b : ");
    scanf("%d", &b);
    
    printf("Donner la valeur de c : ");
    scanf("%d", &c);
    
    disc = b * b - 4 * a * c;
    
    if (disc > 0) {
        x1 = (-b - sqrt(disc)) / (2 * a);
        x2 = (-b + sqrt(disc)) / (2 * a);
        printf("les solutions sont : %.2f et %.2f", x1, x2);
    }
    else if (disc == 0) {
        x1 = -b / (2 * a);
        printf("la solution est : %.2f", x1);
    }
    else
        printf("L'équation n'a pas de solutions réelles");
    return 0;
}
