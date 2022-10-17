#include<stdio.h>
void main(){
    int N,i=0;
    printf("donnez le nombre des element de votre tableau:");
    scanf("%d:",&N);
    float table[N],table1[N];
    for ( i = 0; i < N; i++)
    {
       printf("entrez l'element %d:",i);
       scanf("%f",&table[i]);
       if (table[i]>150)
       {
         table1[i]=table[i]+table[i]*0.1;
       }
       else
       {
        table1[i]=table[i];
       }
       
       
    }
    printf("le 1 ere tableau est:[");
    for ( i = 0; i < N; i++)
    {
        printf("%f,",table[i]);
    }
    printf("]\n");


    printf("le 1 ere tableau est:[");
    for ( i = 0; i < N; i++)
    {
        printf("%f,",table1[i]);
    }
    printf("]\n");

    
    

}