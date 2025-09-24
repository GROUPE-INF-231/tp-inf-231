#include <stdio.h>

#define MAX_LIGNES 100
#define MAX_COLONNES 100

void produitMatriceVecteur(int matrice[MAX_LIGNES][MAX_COLONNES], int vecteur[], int resultat[], int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        resultat[i] = 0;
        for (int j = 0; j < colonnes; j++) {
            resultat[i] += matrice[i][j] * vecteur[j];
        }
    }
}

int main() {
    int lignes, colonnes;

    printf("Entrez le nombre de lignes de la matrice (max %d) : ", MAX_LIGNES);
    do {
        scanf("%d", &lignes);
        if (lignes <= 0 || lignes > MAX_LIGNES) {
            printf("Erreur! Entrez un nombre valide:\n");
        }
    } while (lignes <= 0 || lignes > MAX_LIGNES);

    printf("Entrez le nombre de colonnes de la matrice (max %d) : ", MAX_COLONNES);
    do {
        scanf("%d", &colonnes);
        if (colonnes <= 0 || colonnes > MAX_COLONNES) {
            printf("Erreur! Entrez un nombre valide:\n");
        }
    } while (colonnes <= 0 || colonnes > MAX_COLONNES);

    int matrice[MAX_LIGNES][MAX_COLONNES];
    int vecteur[MAX_COLONNES];
    int resultat[MAX_LIGNES];

    // Saisie de la matrice
    printf("\nSaisie de la matrice :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Entrez l'élément [%d][%d] : ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Saisie du vecteur
    printf("\nSaisie du vecteur :\n");
    for (int j = 0; j < colonnes; j++) {
        printf("Entrez l'élément [%d] : ", j);
        scanf("%d", &vecteur[j]);
    }

    // Calcul du produit matrice-vecteur
    produitMatriceVecteur(matrice, vecteur, resultat, lignes, colonnes);

    // Affichage du résultat
    printf("\nRésultat du produit matrice-vecteur :\n");
    for (int i = 0; i < lignes; i++) {
        printf("%d\n", resultat[i]);
    }

    return 0;
}
