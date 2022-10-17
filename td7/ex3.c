#include<stdio.h>
void main(){
    int i=0,N;
    printf("donnez le nombre des element que vous souhaitez entrer:");
    scanf("%d",&N);
    int table[N], table_impaire[N] ;
    // remplaissage
    for ( i = 0; i < N; i++)
    {
        printf("entez l'element %d:",i+1);
        scanf("%d",&table[i]);
        
    }
    // traitement
    int r=0;
    for ( i = 0; i < N; i++)
    {   
        if (table[i]%2!=0 && r==0 )
        {
            table_impaire[i]=table[i];
            r=0;
        }
        else if (table[i]%2!=0)
        {
            table_impaire[i-1]=table[i];  
            r=0;     }
        
        
        else
        {
            r=1;
        }
        
    }
    

    // affichage des resultat
    printf("le tableau des nombres impaire de votre tableau est:[");
    for ( i = 0; i < N; i++)
    {
        printf("%d,",table_impaire[i]);
        
    }
    printf("]\n");
    

}