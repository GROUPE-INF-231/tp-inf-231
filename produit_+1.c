#include <stdio.h>

unsigned int produit1(unsigned int a,unsigned int b){

    int resultat=0;
for(size_t i=0;i<a*b;i++){
    resultat+=1;
}

return resultat;

}


int main(){
printf("entrer un nombre a:");
unsigned int a;
printf("\n");
scanf("%d",&a);
printf("entrer un nombre b:");
unsigned int b;
scanf("%d",&b);


unsigned int c=produit1(a,b);

printf("\n");
printf("la multiplication de a*b=%d",c);

printf("\n");



}