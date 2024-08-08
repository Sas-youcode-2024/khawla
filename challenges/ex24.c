#include <stdio.h>

int main() {
    int n, u, rev = 0;
    
    printf("Entrer un nombre :");
    scanf("%d", &n);
        
    while (n != 0) {
        u = n % 10;
        rev = rev * 10 + u;
        n /= 10;
    }
    printf("le nombre renversé est : %d", rev);
    
    return 0;
}

