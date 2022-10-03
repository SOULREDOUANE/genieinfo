#include<stdio.h>
void main(){
    int i =1,N,s=0;
    printf("donnez un nombre entier:");
    scanf("%d",&N);
   for ( i = 1; i <=N; i++)
   {
    while (i%2!=0)
    {
      s++;
      break;
    }
    
   }
   printf("le nombre des element impaire entre 1 et %d est:%d",N,s);
}