#include <stdio.h>
#include "exercice1.h"

void main(){

    int a, b, c;

    printf("écrire la valeur de A\n");
    scanf("%d", &a);

    printf("écrire la valeur de A\n");
    scanf("%d", &b);

    printf("écrire la valeur de A\n");
    scanf("%d", &c);

    printf("%s%d%s%d%s%d%s", "A =",a,"B = ", b ,"C = ", c, "\n");
    
    a, b, c = permutation(a, b, c);

    printf("%s%d%s%d%s%d%s", "Après permutation : A =", a,"B = ", b ,"C = ", c, "\n");

    return;

}