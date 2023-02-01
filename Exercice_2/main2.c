//Question 1
#include <stdio.h>
#include "question_2.h"


void main(){
    
    int p, n;
    
    printf("Give me the value of x \n");
    scanf("%d", &n);

    p = question_2(n);
    
    
    if (p == 0)
        printf ("Vrai\n");
        
    else
        printf ("Faux\n");
        
    return;
}