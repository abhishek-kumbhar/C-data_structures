

# include <stdio.h>

typedef int (*fptr) (int, int);

int add (int n1, int n2) {
    return n1 + n2;
}

int sub (int n1, int n2) {
    return n1 - n2;
}

int mult (int n1, int n2) {
    return n1 * n2;
}

int compute (fptr f, int n1, int n2) {
    printf ("\n\nAddress of f : %p", f);
    return f (n1, n2);
}


void main (void) {
        
    printf ("\nAddress of add : %p", add);
    printf ("\nAddress of sub : %p", sub);
    printf ("\nAddress of mult : %p", mult);
        
    printf ("\nAdd function called %d", compute (add, 4, 5));
    printf ("\nSub function called %d", compute (sub, 4, 5));
    printf ("\nMult function called %d", compute (mult, 4, 5));


}









