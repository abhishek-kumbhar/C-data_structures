

# include <stdio.h>

typedef int (*fptr) (int, int);

int add (int n1, int n2) {
    return n1 + n2;
}

int sub (int n1, int n2) {
    return n1 - n2;
}

fptr select (char c) {
    switch (c) {
        case '+' : return add;
        case '-' : return sub;
    }
}

int evaluate (char c, int n1, int n2) {
    fptr f  = select (c);
    printf ("\nreturned address of f = %p", f);
    return f (n1, n2);
}

void main (void) {
    
    printf ("\nAddress of add = %p", add);
    printf ("\nAddress of sub = %p\n", sub);

    
    printf ("\nAddition : %d", evaluate ('+', 5, 4));
    printf ("\nSubtraction : %d\n", evaluate ('-', 5, 4));

}
