#include<stdio.h>
void main(){
    int N;
    printf("donnez le nombre des notes:");
    scanf("%d",&N);
    float table[N],j=20;
    int i=0,s=0;
    for ( i = 0; i <N; i++)
    {
        printf("entrez la note %d:",i);
        scanf("%f",&table[i]);
        s+=table[i];
        if (j>table[i])
        {
            j=table[i];
        };
        
    };
    printf("la moyenn du notes est:%f\n",(float)s/N);
    printf("la note la plus ecarte de la moyenn est:%f",j);
        
    
}