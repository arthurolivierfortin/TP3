#include <stdio.h>


void main(){

    int n;
    int résultat = 1;
    int i = 1;

    printf("Entrez un nombre entier");
    scanf("%d", &n);
   

    for (i = 2; i < (n+1);i++){
        résultat = i*résultat;
        printf("%d%s", résultat, "\n");
        }

    return;
}