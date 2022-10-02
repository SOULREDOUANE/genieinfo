#include<stdio.h>
#define pi=3.14
void main(){
    float rayon, p;
    int n,i=1;
    printf("entrer le nombre de circle que vous souhaiter calculer leurs périmètres:");
    scanf("%d",&n);
    do
    {
        printf("donner le rayon de la circle de nombre %d:",i);
        scanf("%f",&rayon);
        p=2*pi*rayon; //there is a probleme here
        printf("le périmètres de votre circle est:%f",p);
        i++;

    } while (i<n); 
    
}



// void main(){
//      float rayon, p;
//      printf("donner le rayon de la circle ");
//     while (rayon>=0)
//     {
//     scanf("%f",&rayon);
//     p=2*pi*rayon; //there is a probleme here
//     printf("le périmètres de votre circle est:%f",p);
//     printf("donner le rayon de la circle de nombre :");
//     }
    
// }





