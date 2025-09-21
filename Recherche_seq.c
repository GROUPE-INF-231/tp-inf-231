#include <stdio.h>
#include <stdlib.h>

int recherche(float a, int n, float tab[])
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
    float a, tab[] = {0.5, 5, 8, 45, 2.5, 8, 78, 50, 4.3};
    printf("Veuillez entrer le reel a rechercher\n");
    scanf("%f", &a);
    int indice = recherche(a, 9, tab);
    if (indice == -1)
    {
        printf("Cet element ne fait pas partie du tableau\n");
    }
    else
    {
        printf("L indice de cet element est %d\n", indice);
    }
    return 0;
}