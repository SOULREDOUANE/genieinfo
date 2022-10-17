#include<stdio.h>
void main(){
    int N, i=0, j=0 ;
    int table1[N],table2[N];
    printf("donnez le nombre d'element:");
    scanf("%d",&N);
    // la remplissage de la 1ere tableau
    printf("pour le tableau 1:\n");

    for ( i = 0; i < N; i++)
    {
        printf("entrez l'element%d:",table1[i]);

    }
        // la remplissage de la 2ere tableau

    printf("pour le tableau 2:\n");
    
        for ( i = 0; i < N; i++)
    {
        printf("entrez l'element%d:",table2[i]);

    }
    // la partie du traitement des donnees(comparaison)
    for ( i = 0; i <N; i++)
    {   int r=0;
        for ( j = 0; j < N; j++)
        {
           
           if (table1[i]==table2[i])
           {
            r=1;
            
           }
           
        
        
            
        }
        if (r==0)
        {

            printf("les deux tableux sont different.");
            break;
        }
        
    }
    printf("les deux tableau sont identique.");

    

    
}