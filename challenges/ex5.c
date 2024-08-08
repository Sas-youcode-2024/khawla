#include <stdio.h>

int main() {
    int c;

    printf("Donner un caractère : ");
    scanf("%c", &c);
    
    if (c >= 'A' && c <= 'Z')
        printf("Ce caractère est majuscule");
        
    else
        printf("Ce caractère n'est pas majuscule");
    
    return 0;
}
