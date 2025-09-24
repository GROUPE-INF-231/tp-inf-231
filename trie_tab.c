#include <stdio.h>
#define MAX 100

int ordre_tri(double tab[], int taille) {
    int i;
    int croissant = 1;
    int decroissant = 1;

    for (i = 0; i < taille - 1; i++) {
        if (tab[i] > tab[i + 1])
            croissant = 0;
        if (tab[i] < tab[i + 1])
            decroissant = 0;
    }

    if (croissant)
        return 1;
    else if (decroissant)
        return 2;
    else
        return 0;
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


    int ordre = ordre_tri(tableau, taille);
    if (ordre == 1)
        printf("Le tableau est trie dans l'ordre croissant.\n");
    else if (ordre == 2)
        printf("Le tableau est trie dans l'ordre decroissant.\n");
    else
        printf("Le tableau n'est pas trie.\n");

    return 0;
}
