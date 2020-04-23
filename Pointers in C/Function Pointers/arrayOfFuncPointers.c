

# include <stdio.h>

typedef int (*fptr) (int, int);

fptr f [128] = {NULL};

int add (int n1, int n2) {
    return n1 + n2;
}

int sub (int n1, int n2) {
    return n1 - n2;
}

int mul (int n1, int n2) {
    return n1 * n2;
}

void initializeArray () {
    f ['+'] = add;
    f ['-'] = sub;
    f ['*'] = mul;
}


int evaluate (char c, int n1, int n2) {
    fptr fp  = f [c];
    printf ("\nreturned address for fp = %p", fp);
    return fp (n1, n2);
}

void main (void) {
    
    printf ("\nAddress of f ['+'] = %p", f ['+']);
    printf ("\nAddress of f ['-'] = %p", f ['-']);
    printf ("\nAddress of f ['*'] = %p\n", f ['*']);
    
    initializeArray ();
    
    printf ("\nAfter initialization of Array : \n");
    
    printf ("\nAddress of f ['+'] = %p", f ['+']);
    printf ("\nAddress of f ['-'] = %p", f ['-']);
    printf ("\nAddress of f ['*'] = %p\n", f ['*']);

    printf ("\nAddition : %d", evaluate ('+', 5, 4));
    printf ("\nSubtraction : %d", evaluate ('-', 5, 4));
    printf ("\nMultiplication : %d\n", evaluate ('*', 5, 4));

}
