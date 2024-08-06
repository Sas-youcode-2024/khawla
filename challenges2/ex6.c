#include <stdio.h>

int main {
	int n;
	printf("Donner un nombre : ");
	scanf("%d",n);

	if (n > 0)
		printf("Le nombre est positif");
	else if (n < 0)
		printf("Le nombre est négatif");
	else
		printf("Le nombre est nul");

	return 0;
}
