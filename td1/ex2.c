#include <stdio.h>
int main(){
    const float p=3.14;
    float rayon, perimetre ;
    printf("donner le rayon de votre circle:");
    scanf("%f",rayon);
    perimetre= 2* p * rayon;
    printf("le perimtre de votre circle est:%f",perimetre);
    return 0;
}