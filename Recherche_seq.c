#include <stdio.h>
#define MAX 100

int recherche(double a, int n, double tab[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (tab[i] == a)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    double tableau[MAX];
    int taille = 0;
    double x;

    printf("Entrez les elements du tableau: (-999 pour terminer):\n");
    do {
        scanf("%lf", &x);
        if (x != -999) {
            if (taille < MAX) {
                tableau[taille++] = x;
            }
            else {
                printf("Taille maximale (%d) atteinte.\n", MAX);
                break;
            }
        }
    } while (x != -999);

    double a;
    printf("Veuillez entrer le reel a rechercher\n");
    scanf("%lf", &a);

    int indice = recherche(a, taille, tableau);
    if (indice == -1)
    {
        printf("Cet element ne fait pas partie du tableau\n");
    }
    else
    {
        printf("Element present. L'indice de cet element est %d\n", indice);
    }
    return 0;
}
