

# include <stdio.h>

void * malloc (size_t);

int * allocateArray (int n, int value) {    
    
    printf ("\nIn allocateArray Function : ");
    
    int * arr = (int *) malloc (n * sizeof (int));
    
    if (arr) {
        printf ("\nBlock allocated SUCCESFULLY..");
        printf ("\n\nAllocated Memory block's starting address : %p", arr);
        for (int i = 0; i < n; i++) {
            arr [i] = value;
        }
        return arr;
    } else {
        return NULL;
    }
    
}


void main (void) {
    
    int n = 5, value = 99;

    printf ("\nIn main function : ");
    
    printf ("\nCalling allocatMemory function ...\n");
    int * vector = allocateArray (5, 99);
    
    if (vector) {
        printf ("\n\nReturned address by function : %p", vector);
        printf ("\nElements from Dynamically Allocated Array are : ");

        for (int i = 0; i < n; i++) {
            printf ("%d ", vector [i]);
        }
    } else {
        printf ("\nMemory Allocation Failed ...\n");
    }



}
