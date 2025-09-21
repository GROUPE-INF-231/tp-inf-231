#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, p, i, j, k;
    printf("Veuillez entrer le nombre de lignes de la premiere matrice\n\t");
    scanf("%d", &m);
    printf("Veuillez entrer le nombre de colones de la premiere matrice qui est aussi le nombre de ligne de la deuxieme matrice\n\t");
    scanf("%d", &n);
    printf("Veuillez entrer le nombre de colones de la deuxieme matrice\n\t");
    scanf("%d", &p);
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
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
            prod[i][j] = 0;
            for(k = 0; k < n; k++){
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%0.3f\t", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
