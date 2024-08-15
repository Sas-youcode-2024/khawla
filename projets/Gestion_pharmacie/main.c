#include "header.h"

int main() {
    Produit produits[MAX_PRODUITS];
    int n = 0;
    int choix, quantite;
    char code[20];
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Ajouter un produit\n");
        printf("2. Ajouter plusieurs produits\n");
        printf("3. Afficher tous les produits\n");
        printf("4. Trier les produits par nom\n");
        printf("5. Trier les produits par prix\n");
        printf("6. Acheter un produit\n");
        printf("7. Rechercher un produit par code\n");
        printf("8. Rechercher des produits par quantité\n");
        printf("9. Alimenter le stock\n");
        printf("10. Supprimer un produit\n");
        printf("11. Afficher l'état du stock\n");
        printf("12. Afficher les statistiques des ventes\n");
        printf("13. Sauvegarder les produits\n");
        printf("14. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                AjoutProduit(produits, &n);
                break;
            case 2:
                AjoutPlusProduits(produits, &n);
                break;
            case 3:
                ListProduits(produits, n);
                break;
            case 4:
                TriParNom(produits, n);
                break;
            case 5:
                TriParPrix(produits, n);
                break;
            case 6:
                AchatProduit(produits, n);
                break;
            case 7:
                ProduitParCode(produits, n, code);
                break;
            case 8:
                ProduitParQuantite(produits, n, quantite);
                break;
            case 9:
                AlimenterStock(produits, n, code, quantite);
                break;
            case 10:
                SupprimerProduit(produits, &n, code);
                break;
            case 11:
                EtatStock(produits, n);
                break;
            case 12:
                printf("Total des ventes : %.2f\n", TotalVentes(produits, n));
                printf("Moyenne des ventes : %.2f\n", MoyenneVentes(produits, n));
                printf("Maximum des ventes : %.2f\n", MaxVente(produits, n));
                printf("Minimum des ventes : %.2f\n", MinVente(produits, n));
                break;
            case 13:
                SauvegardProduits(produits, n);
                break;
            case 14:
                printf("Quitter le programme.\n");
                exit(0);
                break;
            default:
                printf("Option invalide. Essayez encore.\n");
        }

        while (getchar() != '\n');
    }

    return 0;
}


