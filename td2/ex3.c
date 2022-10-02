#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d;
    printf("entrer ici les deux constants caracteristique(a , b puis c) de votre equation de  2ere ordre:");
    scanf("%f %f %f",a,b,c);
    d= b*b -4*a*c;
    if (d==0)
    {printf(" la solution de votre equation est %f:",-b/2*a);
    }
    else if (d>0)
    {
        printf("les solution de votre equation sont: %f ou %f",(-b +sqrt(d))/2*a,(-b -sqrt(d))/2*a);
    }
    else
    {
        printf("votre equation n'a aucune solution dans l'ensemble des nombres reels");
    }
    
    
    
}