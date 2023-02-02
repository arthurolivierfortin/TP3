#include <stdio.h>




void main(){

    int i;
    float x, n, k, y, g, h, t;
    float l;

    
    float résultat = 0;

    printf("valeur du n \n");
    scanf("%f", &n);

    printf("valeur du x \n");
    scanf("%f", &x);


    for (i=1; i<(n+1); i++){
        k = i;
        g = 2*i;
        x = i;
        h = x;
        t = h;
        printf("@@@ \n");
        printf("%s%f%s", "k", k, "\n");
        printf("%s%d%s", "i", i, "\n");
        printf("%s%f%s", "x", x, "\n");
        printf("%s%f%s", "h", h, "\n");
        printf("%s%f%s", "g", g, "\n");


        //x = X
        while (k  > 1){
            x = x * x;
            k -= 1;
            printf("&&& \n");
        }
        printf("%f%s", x, "x\n");
        
        //(-1)*i+1 = y
        if (((i+1)%2) == 1){
            y = -1;
            printf("*** \n");
        }
        printf("%f%s", y, "y1 \n");

        //(-1)*i+1 = y
        if (((i+1)%2) == 0){
            y = 1;
            printf("!!! \n");
        }
        printf("%f%s", y, "y2 \n");

        //X*2i = h
        while (g  > 1){
            t *= h;
            g -= 1;
            printf("%f%s", t, "##t");
            printf("??? \n");
        }
        printf("%f%s", t, "t\n");

        printf("%s%f%s", "y*", y, "\n");
        printf("%s%f%s", "x*", x, "\n");
        printf("%s%f%s", "t*", t, "\n");

        l = ((y/x) + (1/t));
        printf("%s%f%s", "((y/x) + (1/t)) =", l, "\n");
        résultat += l;
        x +=1 ;
        printf("%f%s", résultat, "résultat \n");


    }
    
    printf("%f%s", résultat, "résultat final\n");
        
}