#include <stdio.h>

int main() {
    int c;

    printf("Donner un caractère : ");
    scanf("%c", &c);
    
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Ce caractère est un voyelle.\n");
            break;
        default:
            printf("Ce caractère n'est pas un voyelle.\n");
            break;
    }
    return 0;
}
