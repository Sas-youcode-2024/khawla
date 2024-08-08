#include <stdio.h>

int main() {
    int n, sum = 0, max = -1;
    
    printf("Entrer des nombres positifs (pour terminer entrer 0) :\n");
    while (1) {
        scanf("%d", &n);
        
        if (n == 0)
            break;
            
        if (n <= 100) {
            sum += n;
            if (max < n)
                max = n;
        }
    }
    if (max == 0)
        printf("aucun nombre valide n'a été entré");
    
    else {
        printf("Somme : %d\n", sum);
        printf("Max : %d\n", max);    
    }
    return 0;
}

