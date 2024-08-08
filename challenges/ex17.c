#include <stdio.h>

int main() {
    int n, u, d, c;

    printf("Donner un nombre à trois chiffres : ");
    scanf("%d", &n);

    u = n % 10;
    d = (n / 10) % 10;
    c = n / 100;
    
    printf("le nombre inversé est : %d%d%d", u, d, c);
    
    return 0;
}
