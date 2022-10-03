#include<stdio.h>
void main(){
    int N ,i=1;
    printf("donnez le nombre que vous souhaiter avoir son tableau de multiplication:");
    scanf("%d",&N);
    for ( i = 1; i < 10; i++)
    {
     printf("%dx%d=%d\n",N,i,N*i);
    }
    }
    