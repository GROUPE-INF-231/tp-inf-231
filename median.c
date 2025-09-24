#include <stdio.h>

//trie à bulle
void trie(double tab[], int tailleMax) {
    int i, j;
    double temp;
    for (i = 0; i < tailleMax - 1; i++) {
        for (j = 0; j < tailleMax - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

double median_tab(double tab[], int tailleMax) {
    if (tailleMax % 2 == 0) {
        double resultat = (tab[tailleMax / 2 - 1] + tab[tailleMax / 2]) / 2;
        return resultat;
    }
    else {
        return tab[tailleMax / 2];
    }
}

int main() {
    int i, j, taille;

    printf("Entrez le nombre d'elements du tableau:\n");
    do {
        scanf("%d", &taille);
        if (taille <= 0) {
            printf("Erreur! Entrez une valeur valide:\n");
        }
    } while (taille <= 0);

    double tab1[taille];
    printf("Remplissez le tableau:\n");
    for (i = 0; i < taille; i++) {
        scanf("%lf", &tab1[i]);
    }

    trie(tab1, taille);

    printf("Tableau trie:\n");
    for (i = 0; i < taille; i++) {
        printf("%.1lf\n", tab1[i]);
    }

    printf("La mediane de ce tableau est: %.2f\n", median_tab(tab1, taille));

    return 0;
}
