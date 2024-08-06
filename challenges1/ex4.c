#include <stdio.h>

int main() {
    float a, b, c, d, sum, m;
    
    printf("Donner la valeur de a : ");
    scanf("%f", &a);
    
    printf("Donner la valeur de b : ");
    scanf("%f", &b);
    
    printf("Donner la valeur de c : ");
    scanf("%f", &c);
    
    printf("Donner la valeur de d : ");
    scanf("%f", &d);
    
    sum = a + b + c + d;
    m = sum / 4;
    
    printf("Somme : %.2f\nMoyenne : %.2f", sum, m);
    return 0;
}
