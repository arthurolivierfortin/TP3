#include <stdio.h>


void main(){

    int i, x, n, k, y, g, h;

    
    float résultat = 0;

    printf("valeur du n");
    scanf("%d", &n);


    for (i=0; i<(n+1); i++){
        k = i;
        g = 2*i;
        x = i;
        h = x;


        while (k  < 1){
            x = x * x;
            k -= 1;
        }
        //x = X

        if ((i%2) == 1){
            y = -1;
        }

        if ((i%2) == 0){
            y = 1;
        }

        while (g  < 1){
            h = h * h;
            g -= 1;
        }

        résultat += ((y/x) + (1/h));
        x+=1;


    }

    printf("%f", résultat);
        
}