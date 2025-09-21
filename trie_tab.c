#include <stdio.h>
#include <stdlib.h>

int is_trie_tab(double tab[],int TailleMax){

    for(size_t i=0;i<TailleMax -1;i++){
        if(tab[i]>tab[i+1])
            return 0;
        }

    
    return 1;
}


int main(){
    int Taille;

    printf("entrer la taille de votre tableau:");

    scanf("%d",&Taille);

    double tab[Taille];

    printf("remplissafe du tableau...");
    printf("\n");
    for(size_t i=0;i<Taille;i++){
        scanf("%lf",&tab[i]);
    }

    if(is_trie_tab(tab,Taille))
        printf("le tableau est pas trié");
    else
        printf("le tableau n'est pas trié");
    


        printf("\n");

return 0;

}