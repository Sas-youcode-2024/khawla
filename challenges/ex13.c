#include <stdio.h>

int main() {
    int a, b, sum, dif, prod, r;
    float quot;
    
    printf("Donner la valeur de a: ");
    scanf("%d", &a);
    
    printf("Donner la valeur de b: ");
    scanf("%d", &b);
    
    sum = a+b, dif = a-b, prod = a*b, r = a%b;
    quot = (float)a/b;
    
    printf("Somme : %d\n", sum);
    printf("Différence : %d\n", dif);
    printf("Produit : %d\n", prod);
    printf("Quotient : %.2f\n", quot);
    printf("Reste : %d\n", r);
    
    return 0;
}
