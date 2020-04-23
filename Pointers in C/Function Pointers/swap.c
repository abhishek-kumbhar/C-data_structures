
# include <stdio.h>


void swapWithoutPointers (int x, int y) {
    printf ("\nIn swapWithoutPointers function : ");
    printf ("\nIn this function, X & Y are formal arguments (i.e. Copy of Values)");
    printf ("\nAddress of local X = %p", &x);
    printf ("\nAddress of local Y = %p", &y);

    x = x + y - (y = x);
    
    printf ("\nValue of X = %d", x);
    printf ("\nValue of Y = %d", y);

}

void swapWithPointers (int * x, int * y) {
    printf ("\nIn swapWithPointers function : ");
    printf ("\nIn this function, X & Y are pointers to actual arguments in Main function");
    printf ("\nAddress of X = %p", x);
    printf ("\nAddress of Y = %p", y);
    printf ("\nHere, you can see the address of variables X & Y are same like address of variables");
    printf ("In main function");

    *x = *x + *y - (*y = *x);
    
    printf ("\nValue of X = %d", * x);
    printf ("\nValue of Y = %d", * y);

}


void main (void) {
        
    int x = 10, y = 20;

    printf ("\nIn main function : ");
    printf ("\nAddress of X = %p", &x);
    printf ("\nAddress of Y = %p", &y);
    printf ("\nValue of X = %d", x);
    printf ("\nValue of Y = %d", y);
    
    printf ("\n\n");
    
    printf ("\nCalling to swapWithoutPointers function : ");

    swapWithoutPointers (x, y);
    
    printf ("\nValues of X & Y when called swap function without Pointers : ");
    printf ("\nValue of X = %d", x);
    printf ("\nValue of Y = %d", y);

    printf ("\n\n");
    
    printf ("\nCalling to swapWithPointers function : ");
    
    swapWithPointers (&x, &y);
    
    printf ("\nValues of X & Y when called swap function with Pointers : ");
    printf ("\nValue of X = %d", x);
    printf ("\nValue of Y = %d", y);

    printf ("\n\n");
}
