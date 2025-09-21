#include <stdio.h>
#include <stdlib.h>



void trie(double tab[],int TailleMax){
    int MAX;

    for(size_t i=0;i<TailleMax-1;i++){

        for(size_t j=0;j<TailleMax-i-1;j++){
            if(tab[j]>tab[j+1])
            {
                MAX=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=MAX;
            }
        }
    }
}

double median_tab(double tab[],int  TailleMax){

    double median=0;

    if(TailleMax%2==0){
        median=tab[TailleMax/2-1]+tab[TailleMax];

    }else{
        median=tab[TailleMax/2];
    }
    return median;

}


int main(){
int Taille;
printf("entrer le nombre de element que tu veux dans ton tableau:");
scanf("%d",&Taille);
double tab1[Taille];

printf("remplissage de votre tableau:");

printf("\n");

for(size_t i=0;i<=Taille-1;i++){
    printf(" case%ld :",i);
    
    scanf("%lf",&tab1[i]);
    printf("\n");
}

trie(tab1,Taille);

for(size_t i=0;i<=Taille-1;i++){
    printf("%lf ",tab1[i]);
    printf("\n");
}
printf("-----------------------------------------------------------------------\n");
double median;
    median=median_tab(tab1,Taille);

    printf("la median de ce Tableau est %.2f",median);
    printf("\n");



    return 0;

}