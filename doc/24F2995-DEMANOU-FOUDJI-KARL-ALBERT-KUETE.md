# Cahier de suivi individuel — INF231 (TP)  
**Étudiant :** DEMAOU FOUDJI KARL ALBERT KUETE  
**Matricule :** 24F2995  
**Groupe :** INF231_EC2  
**Exercices attribués :**  
  

---

## 1) Objectif des exercices

### 🔹 Recherche séquentielle  
Écrire un programme en **C** qui parcourt un tableau de taille `n` et recherche une valeur donnée `val`.  
- Si la valeur est trouvée, afficher sa position.  
- Sinon, indiquer qu’elle n’existe pas dans le tableau.  

### 🔹 Test de tri  
Écrire un programme en **C** qui vérifie si un tableau d’entiers est :  
- trié en ordre croissant,  
- trié en ordre décroissant,  
- ou non trié.  

---

## 2) Algorithmes (description)

### 🔹 Recherche séquentielle
1. Lire `n` (taille du tableau).  
2. Lire les `n` éléments du tableau.  
3. Lire la valeur `val` à rechercher.  
4. Parcourir le tableau :  
   - Si `A[i] == val`, afficher la position et arrêter.  
   - Sinon continuer.  
5. Si fin du parcours sans succès → afficher "valeur non trouvée".  

**Complexité temporelle :** O(n).  
**Complexité mémoire :** O(1).  

### 🔹 Test de tri
1. Lire `n` (taille du tableau).  
2. Lire les `n` éléments.  
3. Initialiser deux compteurs : `asc` et `desc`.  
4. Comparer chaque paire `(A[i], A[i+1])`.  
   - Si `A[i] <= A[i+1]` → incrémenter `asc`.  
   - Sinon → incrémenter `desc`.  
5. Après parcours :  
   - Si `asc == n-1` → tableau trié en croissant.  
   - Si `desc == n-1` → tableau trié en décroissant.  
   - Sinon → tableau non trié.  

**Complexité temporelle :** O(n).  
**Complexité mémoire :** O(1).  


### PRODUIT +1
1-LIRE DEUX nombre a et b.
2. utiliser une boucle for pour avec i=1 comme initialisateur jusqu'a i<=a*b

---

## 3) Codes sources  
#median
  

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










```
#trie tableau

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


#produit +1


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






```

# Compilation

```bash
gcc -o recherche_seq ./c/recherche_seq.c
gcc -o test_tri ./c/test_tri.c
gcc -o median ./c/median.c

# Exécution
```bash
./recherche_seq.c
./median
./trie_tab

```bash
Entrez le nombre d'elements du tableau: 5
Entrez les valeurs du tableau: 3 7 9 2 5
Entrez la valeur a rechercher: 9
Valeur trouvee a la position 2 du tableau.
```

