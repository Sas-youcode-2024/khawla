#include <stdio.h>

int main() {
    char c;

    printf("Donner un caractère : ");
    scanf("%c", &c);
    
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c >= 'a' && c <= 'z')
            printf("Ce caractère est un alphabet. C'est une minuscule");
        else
            printf("Ce caractère est un alphabet. C'est une majuscule");
    }
    else
        printf ("Ce caractère n'est pas un alphabet");
        
    return 0;
}
