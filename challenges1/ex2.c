#include <stdio.h>

int main() {
    float T, C;
    
    printf("Entrer la Temperature en Fahrenheit: ");
    scanf("%f", &T);
    
    C = (T - 32) / 1.8;
    
    printf("La temmpérature en Celsius est: %f\n", C);
    
    if ( C < 0)
        printf("Tres froid");
    else if ( C < 10)
        printf("Froid");
    else if ( C < 25)
        printf("Chaud");
    else
        printf("Tres chaud");
    return 0;
}
