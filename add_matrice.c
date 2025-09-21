#include <stdio.h>
#include <stdlib.h>


void add_matrice1(int ligne,int colonne,double MatrA[ligne][colonne],double MatrB[ligne][colonne]){

        double MatrC[ligne][colonne];

                for(size_t i=0;i<=ligne-1;i++){
                        for(size_t j=0;j<=colonne-1;j++){
                                MatrC[i][j]=MatrA[i][j]+MatrB[i][j];
                        }

                }

	

    	for(size_t i=0;i<=ligne-1;i++){
		for(size_t j=0;j<=colonne-1;j++){
			printf("%lf ", MatrC[i][j]);
		}

		printf("\n");
	}
}




int main(){

	int ligne;
	int colonne;

	printf("entrer le nombre de ligne de votre matrice:");
	scanf("%d",&ligne);
	printf("entrer le nombre de colonne de votre matrice:");
	scanf("%d",&colonne);
	
	 double **MatrC=(double **)malloc(ligne*sizeof(double *));

        if(MatrC==NULL){
                perror("->");
                exit(1);
        }

for(size_t k=0;k<=ligne-1;k++){
                MatrC[k]=(double *)malloc(colonne*sizeof(double));

                if(MatrC[k]==NULL){
                        perror("->");




                for(size_t i=0;i<=k-1;i++){
                        free(MatrC[i]);

                }
        
                free(MatrC);

                                exit(1);
                }
}



 double **MatrB=(double **)malloc(ligne*sizeof(double *));

        if(MatrB==NULL){
                perror("->");
                exit(1);
        }

for(size_t k=0;k<=ligne-1;k++){
                MatrB[k]=(double *)malloc(colonne*sizeof(double));

                if(MatrB[k]==NULL){
                        perror("->");




                for(size_t i=0;i<=k-1;i++){
                        free(MatrC[i]);

                }
        
                free(MatrB);

                        
                exit(1);
        }
}

printf("remplissez la premiere matrice:");

for(size_t i=0;i<=ligne-1;i++){
	for(size_t j=0;j<=colonne-1;j++){
                printf("(%ld,%ld):",i,j);
		scanf("%lf",&MatrC[i][j]);
	}

        
}
        printf("\n");

 printf("remplissez la deuxieme matrice:");

for(size_t i=0;i<=ligne-1;i++){
        for(size_t j=0;j<=colonne-1;j++){
                printf(" (%ld,%ld):",i,j);
                scanf("%lf",&MatrB[i][j]);
        }
}


printf("\n");

double **MatrV=(double **)malloc(ligne*sizeof(double *));

        if(MatrV==NULL){
                perror("->");
                exit(1);
        }

for(size_t k=0;k<=ligne-1;k++){
                MatrV[k]=(double *)malloc(colonne*sizeof(double));

                if(MatrV[k]==NULL){
                        perror("->");




                for(size_t i=0;i<=k-1;i++){
                        free(MatrV[i]);

                }

                free(MatrV);
                exit(1);
        }
                


}



MatrV=add_matrice(MatrC,MatrB,colonne,ligne);

printf("la somme des deux matrices est:\n");
for(size_t i=0;i<=ligne-1;i++){
                for(size_t j=0;j<=colonne-1;j++){
                        printf("%.2lf   ", MatrV[i][j]);
                }

                printf("\n");
        }
        for(size_t i=0;i<=ligne-1;i++){
                free(MatrC[i]);
                free(MatrB[i]);
                free(MatrV[i]);

        }        


        free(MatrC);
        free(MatrV);
        free(MatrB);
	return 0;
}
