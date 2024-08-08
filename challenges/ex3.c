#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Donner la valeur du premier nombre : ");
    scanf("%d", &a);
    
    printf("Donner la valeur du deuxième nombre : ");
    scanf("%d", &b);
    
    sum = a + b;
    if (a == b)
        printf("les deux valeurs sont identiques et le triple de leur somme est : %d", sum * 3);

    else
        printf("la somme est : %d", sum);

    return 0;
}
