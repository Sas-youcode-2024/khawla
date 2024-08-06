#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Donner la valeur du premier nombre : ");
    scanf("%d", &a);
    
    printf("Donner la valeur du deuxième nombre : ");
    scanf("%d", &b);
    
    if (a == b) {
        sum = (a + b) * 3;
        printf("les deux valeurs sont identiques et le triple de leur somme est : %d", sum);
    }
    else {
        sum = a + b;
        printf("la somme est : %d", sum);
    }
    return 0;
}
