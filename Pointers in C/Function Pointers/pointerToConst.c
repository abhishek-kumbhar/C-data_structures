
# include <stdio.h>


void pointerToConst (const int * x, int * y) {
    
    printf ("\n\nIn this function, X is a pointers to constant integer variable.");
    printf ("\nThough it is pointer variable still we can't change its value using pointer ");
    printf ("because it is pointer to constant variable and value of constant variable");
    printf (" will NOT change.");
   
    printf ("\n\nAddress of X = %p", x);
    printf ("\nAddress of Y = %p", y);
    
    printf ("\n\nWe can read value of constant variable by dereferencing it but we cant modify it");

    printf ("\n\nValue of X = %d", * x);
    printf ("\nValue of Y = %d\n", * y);
    
    printf ("\nWhen we dont want to modify pointers value and also we dont want to create ");
    printf ("copy of variables by passing it by value then we can use pointer to constant");
}


void main (void) {
        
    int const x = 10;
    int y = 20;

    printf ("\nIn main function : ");
    printf ("\nAddress of X = %p", &x);
    printf ("\nAddress of Y = %p", &y);
    printf ("\nValue of X = %d", x);
    printf ("\nValue of Y = %d", y);
    
    printf ("\n\n");
    
    printf ("\nCalling to pointerToConst function : ");

    pointerToConst (&x, &y);
    

    printf ("\n\n");
}
