#include <stdio.h>
#include <limits.h>

int main() {
    int i, j, n;
    
    printf("donner le nb des entiers: ");
    scanf("%d", &n);
    
    int freq = INT_MAX;
    int rslt = INT_MAX;
    int t[n];
    for (i = 0; i < n ; i++) {
        printf("donner le nb %d: ", i+1);
        scanf("%d", &t[i]);
    }
    for (i = 0 ; i < n ; i++) {
        int count = 1;
        if (t[i] == INT_MAX)
            continue;
            
        for (j = i+1 ; j < n ; j++) {
            if (t[i] == t[j]) {
                count++;
                t[j] = INT_MAX;
            }
        }
        if (count < freq || count == freq && t[i] < rslt) {
            freq = count;
            rslt = t[i];
        }
    }
    printf("%d", rslt);
    return 0;
}
