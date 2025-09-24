#include <stdio.h>

#define MAX 100

void printTab(double tab[], int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        printf("%.1lf ", tab[i]);
    }
    printf("\n");
}

void inverser_tab(double tab[], int tailleMax) {
    int i;
    double temp;
    for (i = 0;i < tailleMax / 2;i++) {
        temp = tab[i];
        tab[i] = tab[tailleMax - 1 - i];
        tab[tailleMax - 1 - i] = temp;
    }
    printTab(tab, tailleMax);
}

int main() {
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

    printf("Tableau Original:\n");
    printTab(tableau, taille);

    printf("Tableau Inverse:\n");
    inverser_tab(tableau, taille);

    return 0;
}