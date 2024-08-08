#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool Premier(int n) {

    if (n < 2) 
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() {
    int l, i, j, max = 2, star = 2;

    printf("Entrez le nombre de lignes: ");
    scanf("%d", &l);

    for (i = 1; i <= l; i++) {
        while (!Premier(star))
            star++;
        max = star;
        star++;
    }
    
    star = 2;
    for (i = 1; i <= l; i++) {
        while (!Premier(star)) 
            star++;

        for (j = 0; j < (max - star) / 2; j++)
            printf(" ");

        for (j = 0; j < star; j++)
            printf("*");

        printf("\n");
        star++;
    }

    return 0;
}

