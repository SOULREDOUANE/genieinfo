#include<stdio.h>
void main (){
//    do
//    {
//     int n,s =0;
//     printf("entrez un entier:");
//     scanf("%d",&n);
//     s+=n;
//    } while (n!=0);
   
   int n,s =0;
    printf("entrez un entier:");
    scanf("%d",&n);
   while (n!=0)
   {
    s+=n;
    printf("entrez un entier:");
    scanf("%d",&n);
   }
   printf("la somme que vous souhaiter calculer:%d",s);

   
}
