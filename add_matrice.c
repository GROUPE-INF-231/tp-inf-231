#include <stdio.h>

void add_matrice(int ligne, int colonne, double MatrA[ligne][colonne], double MatrB[ligne][colonne]) {
        int i, j;

        for (i = 0; i < ligne; i++) {
                for (j = 0; j < colonne; j++) {
                        printf("%.1lf ", MatrA[i][j] + MatrB[i][j]);
                }
                printf("\n");
        }
}

int main() {
        int ligne, colonne;
        int i, j;

        do {
                printf("Entrez la dimension des matrices (ligne * colonne):\n");
                scanf("%d %d", &ligne, &colonne);
                if (ligne < 0 || colonne < 0) {
                        printf("Erreur! Entrez des dimensions valides:\n");
                }
        } while (ligne < 0 || colonne < 0);

        double MatrA[ligne][colonne], MatrB[ligne][colonne];

        printf("Remplissez la premiere matrice:\n");
        for (i = 0; i < ligne; i++) {
                for (j = 0; j < colonne; j++) {
                        printf("M[%d][%d] = ", i, j);
                        scanf("%lf", &MatrA[i][j]);
                }
        }

        printf("Remplissez la deuxieme matrice:\n");
        for (i = 0; i < ligne; i++) {
                for (j = 0; j < colonne; j++) {
                        printf("M[%d][%d] = ", i, j);
                        scanf("%lf", &MatrB[i][j]);
                }
        }

        printf("La somme des deux matrices est:\n");
        add_matrice(ligne, colonne, MatrA, MatrB);
        return 0;
}
