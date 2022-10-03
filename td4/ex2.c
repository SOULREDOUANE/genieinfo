#include<stdio.h>
void main(){
    int i =1,N,s=0;
    printf("donnez un nombre entier:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
      s=s+i;
    }
    printf("la somme que vous souhaitez calculer est:%d",s);
    

}