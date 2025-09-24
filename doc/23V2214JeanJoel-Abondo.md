## Cahier de suivi de projet

### 1. Produit_de_matrice.c
- **Objectif** : Réaliser le produit de deux matrices saisies par l’utilisateur.
- **Étapes principales** :
  - Saisie des dimensions des deux matrices avec vérification de validité.
  - Saisie des éléments de chaque matrice.
  - Calcul du produit matriciel avec trois boucles imbriquées.
  - Affichage du résultat.
- **Problèmes rencontrés** :
  - Gestion de la correspondance des dimensions.
  - Saisie sécurisée des dimensions et des éléments.
- **Solutions apportées** :
  - Utilisation de boucles `do...while` pour la saisie.
- **Tests réalisés** :
  - Multiplication de matrices carrées et non carrées.
  - Vérification des erreurs de saisie.
- **Lien vers le fichier** : [Produit_de_matrice.c](https://github.com/GROUPE-INF-231/tp-inf-231/blob/main/Produit_de_matrice.c)

---

### 2. Produit_vec.c
- **Objectif** : Calculer le produit vectoriel de deux vecteurs à trois composantes.
- **Étapes principales** :
  - Saisie des coordonnées via une fonction dédiée.
  - Calcul du produit vectoriel.
  - Affichage du résultat.
- **Problèmes rencontrés** :
  - Gestion de la saisie utilisateur.
  - Calcul du produit vectoriel.
- **Solutions apportées** :
  - Séparation de la saisie dans une fonction.
- **Tests réalisés** :
  - Produit vectoriel de vecteurs standards.
  - Vérification du signe et des valeurs.
- **Lien vers le fichier** : [Produit_vec.c](https://github.com/GROUPE-INF-231/tp-inf-231/blob/main/Produit_vec.c)

---

### 3. Recherche_seq.c
- **Objectif** : Effectuer une recherche séquentielle d’un réel dans un tableau dynamique.
- **Étapes principales** :
  - Saisie dynamique jusqu’à un marqueur de fin.
  - Saisie de la valeur à rechercher.
  - Recherche séquentielle et affichage du résultat.
- **Problèmes rencontrés** :
  - Gestion de la taille maximale du tableau.
  - Arrêt propre de la saisie.
- **Solutions apportées** :
  - Boucle et condition pour stopper à la taille maximale ou à -999.
- **Tests réalisés** :
  - Recherche d’éléments présents et absents.
  - Test de la limite de taille du tableau.
- **Lien vers le fichier** : [Recherche_seq.c](https://github.com/GROUPE-INF-231/tp-inf-231/blob/main/Recherche_seq.c)
