#include <stdio.h>
#include <stdlib.h>

void saisie_vec(float vec[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &vec[i]);
    }
}

int main()
{
    int i;
    float vec1[3], vec2[3];
    printf("Veuillez saisir les coordonnees du premier vecteur\n");
    saisie_vec(vec1);
    printf("Veuillez saisir les coordonnees du deuxieme vecteur\n");
    saisie_vec(vec2);
    printf("Le produit vectoriel de ces vecteurs est le vecteur de coordonnees suivantes\n");
    float prod_vec[3];
    prod_vec[0] = vec1[1] * vec2[2] - vec2[1] * vec1[2];
    prod_vec[1] = -(vec1[0] * vec2[2] - vec2[0] * vec1[2]);
    prod_vec[2] = vec1[0] * vec2[1] - vec2[0] * vec1[1];
    printf("(%0.3f, %0.3f, %0.3f)\n", prod_vec[0], prod_vec[1], prod_vec[2]);
    return 0;
}