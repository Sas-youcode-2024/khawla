#include "header.h"

void AjoutProduit(Produit produits[], int *n) {
    Produit prod;

    printf("Entrer le nom du produit: ");
    scanf("%s", prod.nom);
    printf("Entrer le code du produit: ");
    scanf("%s", prod.code);
    printf("Entrer le prix du produit: ");
    while (scanf("%f", &prod.prix) != 1 || prod.prix < 0) {
        while (getchar() != '\n');
        printf("Prix invalide. Veuillez entrer un prix positif : ");
    }

    printf("Entrer la quantité du produit: ");
    while (scanf("%d", &prod.quantite) != 1 || prod.quantite < 0) {
        while (getchar() != '\n');
        printf("Quantité invalide. Veuillez entrer une quantité positive : ");
    }

    prod.prix_ttc = prod.prix * 1.15;

    produits[*n] = prod;
    (*n)++;

    printf("Produit ajouté avec succés!\n");
}

void AjoutPlusProduits(Produit produits[], int *n) {
    int nproduits, i;
    
    printf("Combien de produits souhaitez-vous ajouter ? ");
    while (scanf("%d", &nproduits) != 1 || nproduits < 1) {
        while (getchar() != '\n');
        printf("Le nombre entré doit être supérieur à 0. Essayez encore : ");
    }

    for (i = 0 ; i < nproduits ; i++) {
        printf("Ajouter le produit %d:\n", i + 1);
        AjoutProduit(produits, n);
    }
}


void ListProduits(Produit produits[], int n) {
    int i;

    printf("Liste des produits : \n");
    for (i = 0 ; i < n ; i++)
        printf("Nom: %s, Code: %s, Quantite: %d, Prix: %.2f, Prix TTC: %.2f\n",
               produits[i].nom, produits[i].code, produits[i].quantite, produits[i].prix, produits[i].prix_ttc);

}

void TriParNom (Produit produits[], int n) {
    Produit tmp;
    int i, j;

    for (i = 0 ; i < n - 1 ; i++) {
        for (j = i + 1 ; j < n ; j++) {
            if (strcmp(produits[i].nom, produits[j].nom) > 0) {
                tmp = produits[i];
                produits[i] = produits[j];
                produits[j] = tmp;
            }
        }   
    }
    printf("Produits triés par ordre alphabétique:\n");
    ListProduits(produits, n);
}

void TriParPrix(Produit produits[], int n) {
    Produit tmp;
    int i, j;

    for (i = 0 ; i < n - 1 ; i++) {
        for (j = i + 1 ; j < n ; j++) {
            if (produits[i].prix < produits[j].prix) {
                tmp = produits[i];
                produits[i] = produits[j];
                produits[j] = tmp;
            }
        }
    }
    printf("Produits triés par prix:\n");
    ListProduits(produits, n);
}

void AchatProduit(Produit produits[], int n) {
    int quantite, i, trouve = 0;
    char code[20];

    printf("Entrez le code du produit à acheter: ");
    scanf("%s", code);
    printf("Entrez la quantité : ");
    scanf("%d", &quantite);

    for (i = 0 ; i < n; i++) {
        if (strcmp(produits[i].code, code) == 0) {
            if (produits[i].quantite >= quantite) {
                produits[i].quantite -= quantite;
                produits[i].quantiteVendue += quantite;
                produits[i].prix_ttc = produits[i].prix * 1.15; 
                
                time_t t = time(NULL);
                struct tm tm = *localtime(&t);
                snprintf(produits[i].date_achat, sizeof(produits[i].date_achat), "%d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
                
                printf("Produit acheté : %s, Quantité : %d, Prix TTC : %.2f, Date d'achat : %d-%02d-%02d\n",
                       produits[i].nom, quantite, produits[i].prix_ttc, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
                trouve = 1;
            } 
            else 
                printf("Quantité insuffisante.\n");

            break;
        }
    }
    if (!trouve) {
        printf("Produit non trouvé.\n");
    }
}

void ProduitParCode(Produit produits[], int n, char code[]) {
    int i, trouve = 0;

    printf("Entrez le code du produit à rechercher : ");
    scanf("%s", code);

    for (i = 0 ; i < n ; i++) {
        if (strcmp(produits[i].code, code) == 0) {
                printf("Produit trouvé :\n");
                printf("Nom : %s, Code : %s, Quantité : %d, Prix : %.2f, Prix TTC : %.2f\n",
                    produits[i].nom, produits[i].code, produits[i].quantite, produits[i].prix, produits[i].prix * 1.15);
                trouve = 1;
                break;
        }
    }
    if (!trouve)
        printf("Produit non trouvé.\n");
}

void ProduitParQuantite(Produit produits[], int n, int quantite) {
    int i, trouve = 0;

    printf("Entrez la quantité à rechercher : ");
    scanf("%d", &quantite);

    printf("Produits avec une quantité de %d :\n", quantite);
    for (i = 0 ; i < n ; i++) {
        if (produits[i].quantite == quantite) {
            printf("Nom : %s, Code : %s, Quantité : %d, Prix : %.2f, Prix TTC : %.2f\n",
                   produits[i].nom, produits[i].code, produits[i].quantite, produits[i].prix, produits[i].prix * 1.15);
            trouve = 1;
        }
    }
    if (!trouve) {
        printf("Aucun produit trouvé avec cette quantité.\n");
    }
}

void AlimenterStock(Produit produits[], int n, char code[], int quantite) {
    int i, trouve = 0;

    printf("Entrez le code du produit à alimenter : ");
    scanf("%s", code);
    printf("Entrez la quantité à ajouter : ");
    scanf("%d", &quantite);

    for (i = 0 ; i < n ; i++) {
        if (strcmp(produits[i].code, code) == 0) {
            produits[i].quantite += quantite;
            printf("Le stock du produit %s a été mis à jour. Nouvelle quantité : %d\n", produits[i].nom, produits[i].quantite);
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("Produit non trouvé pour mise à jour du stock.\n");
    }
}

void SupprimerProduit(Produit produits[], int *n, char code[]) {
    int i, j, trouve = 0;

    printf("Entrez le code du produit à supprimer : ");
    scanf("%s", code);

    for (i = 0 ; i < *n ; i++) {
        if (strcmp(produits[i].code, code) == 0) {
            for (j = i ; j < *n - 1; j++) {
                produits[j] = produits[j + 1];
            }
            (*n)--;
            printf("Le produit avec le code %s a été supprimé.\n", code);
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("Produit non trouvé pour suppression.\n");
    }
}

void EtatStock(Produit produits[], int n) {
    int i, trouve = 0;

    printf("Produits dont la quantité est inférieure à 3 :\n");

    for (i = 0 ; i < n ; i++) {
        if (produits[i].quantite < 3) {
            printf("Nom : %s, Code : %s, Quantité : %d, Prix : %.2f, Prix TTC : %.2f\n",
                   produits[i].nom, produits[i].code, produits[i].quantite, produits[i].prix, produits[i].prix_ttc);
            trouve = 1;
        }
    }
    if (!trouve) {
        printf("Aucun produit avec une quantité inférieure à 3.\n");
    }
}

float TotalVentes(Produit produits[], int n) {
    float total = 0.0;
    int i;

    for (i = 0 ; i < n ; i++)
        total += produits[i].prix_ttc * produits[i].quantiteVendue;

    return total;
}

float MoyenneVentes(Produit produits[], int n) {
    float total = TotalVentes(produits, n);
    int i, Ventes = 0;

    for (i = 0 ; i < n ; i++) {
        Ventes += produits[i].quantiteVendue;
    }
    return Ventes > 0 ? total / Ventes : 0;
}

float MaxVente(Produit produits[], int n) {
    float max = 0.0;
    int i;

    for (i = 0 ; i < n ; i++) {
        if (produits[i].quantiteVendue > 0 && produits[i].prix_ttc > max) {
            max = produits[i].prix_ttc;
        }
    }
    return max;
}

float MinVente(Produit produits[], int n) {
    float min = FLT_MAX;
    int i;

    for (i = 0 ; i < n ; i++) {
        if (produits[i].quantiteVendue > 0 && produits[i].prix_ttc < min) {
            min = produits[i].prix_ttc;
        }
    }
    return min == FLT_MAX ? 0 : min;
}

void SauvegardProduits(Produit produits[], int n) {
    int i;

    FILE *file = fopen("produits.txt", "w");
    if (file == NULL) {
        printf("Erreur d'ouverture du fichier de sauvegarde.\n");
        return;
    }
    for (i = 0 ; i < n ; i++) {
        fprintf(file, "%s %s %d %.2f %d %s\n",
                produits[i].nom, produits[i].code, produits[i].quantite, produits[i].prix, produits[i].quantiteVendue,
                produits[i].date_achat);
    }
    fclose(file);
    printf("Produits sauvegardés avec succès.\n");
}

void ChargerProduits(Produit produits[], int *n) {
    FILE *file = fopen("produits.txt", "r");
    if (file == NULL) {
        printf("Erreur d'ouverture du fichier de chargement.\n");
        return;
    }
    *n = 0;
    while (fscanf(file, "%s %s %d %f %d %s",
                  produits[*n].nom, produits[*n].code, &produits[*n].quantite, &produits[*n].prix, &produits[*n].quantiteVendue,
                  produits[*n].date_achat) != EOF) {
        produits[*n].prix_ttc = produits[*n].prix * 1.15;
        (*n)++;
    }
    fclose(file);
    printf("Produits chargés avec succès.\n");
}
