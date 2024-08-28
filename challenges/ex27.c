#include <stdio.h>
#include <stdbool.h>

void tri(int arr[], int n) {
	for (int i = 0 ; i < n-1 ; i++) {
        for (int j = i+1 ; j < n ; j++) {
            if (arr[i]>arr[j]) {
                int tmp = arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

void commun(int arr1[], int arr2[], int n1, int n2) {
	int i = 0, j = 0;
    bool found = false;

    	
    while (i < n1 && j < n2) {
    	if (arr1[i] < arr2[j])
        		i++;
    	else if (arr1[i] > arr2[j])
        		j++;
    	else {
    	    if (!found)
    	        printf("les elements communs sont: ");
    		printf("%d ", arr1[i]);
    		found = true;
    		i++;
    		j++;
    	}
	}

	if (!found)
    	printf("aucun élément commun trouvé.");
}

int main() {
    int n1, n2, i, j;
    
    printf("entrer le nb des entiers en S1: ");
    scanf("%d", &n1);
    
    int S1[n1];
    
    for (i = 0 ; i < n1 ; i++) {
        printf("entrer le nb %d: ", i+1);
        scanf("%d", &S1[i]);
    }
    
    printf("entrer le nb des entiers en S2: ");
    scanf("%d", &n2);
    
    int S2[n2];
    
    for (i = 0 ; i < n2 ; i++) {
        printf("entrer le nb %d: ", i+1);
        scanf("%d", &S2[i]);
    }
    
    tri(S1, n1);
    tri(S2, n2);
    
    commun(S1, S2, n1, n2);
    
    return 0;
}
