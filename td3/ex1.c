#include<stdio.h>
void main(){
    int anne;
    printf("donner une annee:");
    scanf("%f",&anne);
    if (anne %4==0 && anne%100!=0 || anne%400==0)
    {
    printf("%f est une annee bissextile",anne);
    }
    else
    {
    printf("%f n'est pas une annee bissextile",anne);
    }
    
    
}