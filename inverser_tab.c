#include <stdio.h>
#include <stdlib.h>

void inverser_tab(double tab[],int TailleMax){

    double temp;
    
    for(size_t i=0;i<TailleMax/2;i++){
        
        temp=tab[i];
        tab[i]=tab[TailleMax-1-i];
        tab[TailleMax-1-i]=temp;


    }

}

int main(){

int Taille;

printf("entrer la taille de votre tableau:");
scanf("%d",&Taille);

double tableau[Taille];

printf("\n");
printf("remplir le tableau");
printf("\n");

for(size_t i=0;i<=Taille-1;i++)
{

    scanf("%lf",&tableau[i]);

    printf("\t");
}

inverser_tab(tableau,Taille);

for(size_t i=0;i<=Taille-1;i++){
    printf("%lf",tableau[i]);
    printf("\t");
}

}