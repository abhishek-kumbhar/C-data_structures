

# include <stdio.h>

void * malloc (size_t);

void fillArray (int * arr, int n, int value) {    
    
    printf ("\nIn fillArray Function : ");
    
    printf ("\nAddress of passed block : %p\n", arr);
    
    for (int i = 0; i < n; i++) {
         arr [i] = value;
    }
    
}


void main (void) {
    
    int n = 5, value = 99;

    printf ("\nIn main function : ");
    
    int * vector = (int *) malloc (n * sizeof (int));
    
    printf ("\nAddress of created block : %p\n", vector);

    printf ("\nCalling fillArray function ...\n");
    
    if (vector) {

        fillArray (vector, n, value);
        
        printf ("\nElements from Dynamically Allocated Array are : ");

        for (int i = 0; i < n; i++) {
            printf ("%d ", vector [i]);
        }
    } else {
        printf ("\nMemory Allocation Failed ...\n");
    }



}
