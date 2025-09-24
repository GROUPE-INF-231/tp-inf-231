#include <stdio.h>

int main()
{
    int n, m, p, i, j, k;

    do {
        printf("Veuillez entrer le nombre de lignes de la premiere matrice:\n\t");
        scanf("%d", &m);
        if (m <= 0) {
            printf("Erreur! Entrez une valeur positive valide.\n");
        }
    } while (m <= 0);
    do {
        printf("Veuillez entrer le nombre de colones de la premiere matrice \nqui est aussi le nombre de ligne de la deuxieme matrice:\n\t");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Erreur! Entrez une valeur positive valide.\n");
        }
    } while (m <= 0);
    do {
        printf("Veuillez entrer le nombre de colones de la deuxieme matrice\n\t");
        scanf("%d", &p);
        if (p <= 0) {
            printf("Erreur! Entrez une valeur positive valide.\n");
        }
    } while (p <= 0);

    float mat1[m][n], mat2[n][p], prod[m][p];

    for (i = 0; i < m; i++)
    {
        printf("Premiere matrice - Veuillez entrer les elements de la ligne %d :\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%f", &mat1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("Deuxieme matrice - Veuillez entrer les elements de la ligne %d :\n", i + 1);
        for (j = 0; j < p; j++)
        {
            scanf("%f", &mat2[i][j]);
        }
    }
    printf("Le produit de ces matrices est :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            prod[i][j] = 0;
            for (k = 0; k < n; k++) {
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%0.3f\t", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
