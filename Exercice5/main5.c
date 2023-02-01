#include <stdio.h>


void main(){

    int x, y;

    //1 
    x = 0;
    y = x++; 
    printf("y = x++                =>      x = %d y = %d \n" , x , y ) ;
    
    //2 
    x = 0;
    y = x--; 
    printf("y = x--                =>      x = %d : : y = %d \n" , x , y ) ;
    
    //3 
    x = 0;
    y = ++x ;
    printf("y = ++x                =>      x = %d : : y = %d \n" , x , y ) ;
    
    //4 
    x = 0;
    y = x ; 
    printf("y = x                  =>      x = %d : : y = %d \n" , x , y ) ;
    
    //5 
    x = 0;
    y = x++; 
    y = x--; 
    printf("y = x++; y = x--       =>      x = %d : : y = %d \n" , x , y ) ;
    
    //6 
    x = 0;
    y = x++; 
    y = --x; 
    printf("y = x++; y = --x       =>      x = %d : : y = %d \n" , x , y ) ;
    
    //7 
    x = 0;
    y = ++x ;
    y = x--; 
    printf("y = ++x ; y = x--      =>      x = %d : : y = %d \n" , x , y ) ;
    
    //8 
    x = 0;
    y = ++x;
    y = --x; 
    printf("y = ++x ; y = --x      =>      x = %d : : y = %d \n" , x , y ) ;
    
    //9 
    x = 0;
    y = x += 1; 
    printf("y = x += 1             =>      x = %d : : y = %d \n" , x , y ) ;
    
    //10 
    x = 0;
    y = x =+ 1; 
    printf("y = x =+ 1             =>      x = %d : : y = %d \n" , x , y ) ;
    
    //11 
    x = 0;
    y = x -= 1; 
    printf("y = x -= 1             =>      x = %d : : y = %d \n" , x , y ) ;
    
    //12 
    x = 0;
    y = x =- 1; 
    printf(" y = x =- 1            =>      x = %d : : y = %d \n" , x , y ) ;


}