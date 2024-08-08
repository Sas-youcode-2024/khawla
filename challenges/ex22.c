#include <stdio.h>
#include <math.h>

int main() {
    int i, n, p = 1;
    
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    
    if (n < 2) 
        printf("Non premier");
        
    else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                printf("Non premier");
                p = 0;
                break;
            }
        }
        if (p)
            printf("Premier");
    }
    
    return 0;
}

