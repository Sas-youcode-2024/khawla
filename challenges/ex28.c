#include <stdio.h>

int main() {
    int n, i, max = 0, sa = 0, sb = 0;
    
    printf("entrer le nb des entiers dans cette séquence: ");
    scanf("%d", &n);
    
    int S[n];
    
    for (i = 0 ; i < n ; i++) {
        printf("entrer le nb %d: ", i+1);
        scanf("%d", &S[i]);
    }
    
    for (i = 0 ; i < n ; i++) {
        if (S[i] > S[max])
            max = i;
    }
    
    for (i = 0 ; i < max ; i++)
        sb += S[i];
    
    for (i = max+1 ; i < n ; i++)
        sa += S[i];
        
    printf("sum after = %d\nsum before = %d", sa, sb);
    return 0;
}
