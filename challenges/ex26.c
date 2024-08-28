#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n1, n2;
    char temp;
    
    printf("donner le texte: ");
    scanf("%[^\n]", str);
    while (getchar() != '\n');
    printf("donner n1: ");
    scanf("%d", &n1);
    printf("donner n2: ");
    scanf("%d", &n2);
    
    n1--;
    n2--;
    
    int len = strlen(str);
    
    if (n1 < 0 || n1 >= len || n2 < 0 || n2 >= len) {
        printf("indices invalides\n");
        return 1;
    }
    if (n1 > n2) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    while (n1 < n2) {
        temp = str[n1];
        str[n1] = str[n2];
        str[n2] = temp;
        n1++;
        n2--;
    }
    
    printf("%s", str);
    return 0;
}
