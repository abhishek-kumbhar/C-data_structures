

# include <stdio.h>

int (*fptr) (int);

int square (int num) {
    return num * num;
}

void main (void) {
        
    printf ("\nAddress of square function : %p", square);
    
    fptr = square;
    
    printf ("\nfptr pointing to : %p", fptr);

    printf ("\nsquare using fptr : %d\n", fptr (5));

}
