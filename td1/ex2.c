#include <stdio.h>
#include<math.h>
int main(){
    const float p=M_PI;
    float rayon, perimetre ;
    printf("donner le rayon de votre circle:");
    scanf("%f",&rayon);
    perimetre= 2* p * rayon;
    printf("le perimetre de votre circle est:%f",perimetre);
    return 0;
}