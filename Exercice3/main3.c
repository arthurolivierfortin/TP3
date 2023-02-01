#include <stdio.h>



void main(){

    int a, b;


    printf("donnez moi deux entier \n");
    scanf("%d%d", &a, &b);

    if (a < 0 && b < 0){
        printf("signe du produit : (+) \n");
        printf("signe de la somme de a+b : (-) \n");
    }
    else
        if (a < 0 || b < 0){
            printf("signe du produit : (-) \n");
            
            // a est négatif
            if (a < 0)
                if ((a*-1) < b)
                    printf("signe de la somme de a+b : (+) \n");
                else
                    printf("signe de la somme de a+b : (-) \n");

            // b est négatif
            else
                if ((b*-1) < a)
                    printf("signe de la somme de a+b : (+) \n");
                else
                    printf("signe de la somme de a+b : (-) \n");

        }
        if (a > 0 && b > 0){
            printf("signe du produit : (+) \n");
            printf("signe de la somme de a+b : (+) \n");
        }
    return;
}
    

    //dans le cas que la somme se fait de a + b et non b + a
    //-4 + 5 = +
    //-5 + 4 = -
    // 4 + -5 = -
    // 5 + -4 = +

