#include <stdio.h>

int produit_1(int a, int b) {
    int i;
    int resultat = 0;
    for (i = 0; i < a * b; i++) {
        resultat += 1;
    }

    return resultat;
}

int main() {
    int nombre1, nombre2, produit;

    printf("Entrer deux nombres positifs:\n");
    do {
        scanf("%d %d", &nombre1, &nombre2);
        if (nombre1 < 0 || nombre2 < 0) {
            printf("Erreur! Entrer deux nombres positifs:\n");
        }
    } while (nombre1 < 0 || nombre2 < 0);

    produit = produit_1(nombre1, nombre2);

    printf("Le produit de %d * %d = %d", nombre1, nombre2, produit);

}
