#include<stdio.h>
void main(){
    float a ,b ;
    printf("entrer ici les deux constants caracteristique(a puis b) de votre equationde  1ere ordre:");
    scanf("%f %f ",&a,&b);
if (a!=0){
        printf("l'unique solution the l'equation est:%f",-b/a); }
    else if (a=0 && b!=0)
    {
        printf("l'equation n'a aucune solution");}
    else
    {
        printf("l'equation a une infinite des solution");
    }
     }

