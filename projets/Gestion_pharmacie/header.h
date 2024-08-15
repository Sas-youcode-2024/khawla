#ifndef HEADER_H
#define HEADER_H

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>

#define MAX_PRODUITS 100

// Structure pour un produit
typedef struct {
    char code[20];
    char nom[50];
    int quantite;
    int quantiteVendue;
    float prix;
    float prix_ttc;
    char date_achat[11];
} Produit;

// Structure pour les statistiques de vente
typedef struct {
    float total;
    float moyenne;
    float max;
    float min;
} Statistiques;

// Prototypes des fonctions
void AjoutProduit(Produit produits[], int *n);
void AjoutPlusProduits(Produit produits[], int *n);
void ListProduits(Produit produits[], int n);
void TriParNom (Produit produits[], int n);
void TriParPrix(Produit produits[], int n);
void AchatProduit(Produit produits[], int n);
void ProduitParCode(Produit produits[], int n, char code[]);
void ProduitParQuantite(Produit produits[], int n, int quantite);
void AlimenterStock(Produit produits[], int n, char code[], int quantite);
void SupprimerProduit(Produit produits[], int *n, char code[]);
float TotalVentes(Produit produits[], int n);
float MoyenneVentes(Produit produits[], int n);
float MaxVente(Produit produits[], int n);
float MinVente(Produit produits[], int n);
void EtatStock(Produit produits[], int n);
void SauvegardProduits(Produit produits[], int n);
void ChargerProduits(Produit produits[], int *n);

#endif