# Gestion de Pharmacie
![WhatsApp Image 2024-08-16 at 12 09 50 AM (1)](https://github.com/user-attachments/assets/0212444e-7607-43a6-a79b-ff3dc8ff6869)

Ce projet est une application console en C pour la gestion d'une pharmacie. Elle permet de gérer les produits pharmaceutiques, de suivre les ventes, de gérer les stocks et de générer des statistiques. Les fonctionnalités incluent l'ajout, la suppression, la recherche et le tri des produits, ainsi que la sauvegarde et le chargement des données.

## Fonctionnalités

- **Ajouter un produit** : Permet d'ajouter un produit avec ses détails.
- **Ajouter plusieurs produits** : Permet d'ajouter plusieurs produits en une seule opération.
- **Afficher tous les produits** : Affiche la liste complète des produits.
- **Trier les produits par nom** : Trie les produits par ordre alphabétique.
- **Trier les produits par prix** : Trie les produits par prix décroissant.
- **Acheter un produit** : Enregistre une vente et met à jour le stock.
- **Rechercher un produit par code** : Trouve un produit en fonction de son code.
- **Rechercher des produits par quantité** : Trouve les produits ayant une quantité spécifique.
- **Alimenter le stock** : Ajoute une quantité à un produit existant.
- **Supprimer un produit** : Supprime un produit du stock.
- **Afficher l'état du stock** : Affiche les produits dont la quantité est inférieure à un seuil.
- **Afficher les statistiques des ventes** : Montre les statistiques de vente comme le total, la moyenne, le maximum et le minimum des ventes.
- **Sauvegarder les produits** : Enregistre les produits dans un fichier pour persistance.

## Installation

1. Cloner le dépôt :
   ```bash
   git clone https://github.com/ton_utilisateur/ton_repertoire.git
2. Accéder au répertoire du projet :
   ```bash
   cd ton_repertoire/projets/Gestion_pharmacie
3. Compiler le projet :
   ```bash
   gcc -o gestion_pharmacie main.c produits.c -std=c99

## Utilisation

1. Exécuter le programme :
   ```bash
   ./gestion_pharmacie
2. Suivre les instructions à l'écran pour interagir avec l'application.

## Fichiers

* `header.h` : Définitions des structures et prototypes des fonctions.
* `produits.c` : Implémentation des fonctions de gestion des produits.
* `main.c` : Fonction principale avec le menu de l'application.

## Contribuer

Les contributions sont les bienvenues! Pour contribuer :
1. Fork le projet.
2. Créer une branche pour ta fonctionnalité : git checkout -b ma-nouvelle-fonctionnalite.
3. Commit tes modifications : git commit -am 'Ajoute une nouvelle fonctionnalité'.
4. Push vers la branche : git push origin ma-nouvelle-fonctionnalite.
5. Ouvre une pull request.
