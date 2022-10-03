#include<stdio.h>
void main(){
    int n,s =0;
    printf("entrez un entier:");
    scanf("%d",&n);
    s+=n;
   while (n!=0)
   {
    printf("est ce que  vous voulez ajouter un nombre entier (si oui entrer le , si non cliquer sur le nombre 0:):");
    scanf("%d",&n);
    if (n==0)
    {
        break;
    }
    
    
    s+=n;
   }
   printf("la somme que vous souhaiter calculer:%d",s);
}