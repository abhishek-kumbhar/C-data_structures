
# include <stdio.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void main (void) {
    
    int array [] = {9, 99, 999, 9999};
    
    int * ptr = array;
    int * ptr1, * ptr2, * ptr3;
    
    ptr = array;
    ptr1 = array + 1;
    ptr2 = array + 2;
    ptr3 = array + 3;

    printf (WHT"\nStarting address of Array   : %p", array);
    printf ("\nContaints in the Box of ptr : %p", ptr);

    printf ("\n\nBoth are SAME Therefore ptr is pointing to base of array.\n");
    
    printf (RED"\n____________________________________________________________________\n");
    
/*---------------------------------------------------------------------------------------------------------------*/
    
    printf (WHT"\n!!!!!!!!!!!!!!!  Unary Operators with Pointers  !!!!!!!!!!!!!!\n");
    
    printf (BLU"\nThese are Unary Operators : -, ++, --, !, &, sizeof() \n");
    
    printf ("\nWe can't use (-), (!) operators with pointers, this is meaningLess...\n");
    
    

    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (++) is used to increment pointer location by 1");
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\nptr1++");
    
    ptr1++;   // same as ptr1 = pr1 + 1;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\n++ptr1");
    
    ++ptr1;   // same as ptr1 = pr1 + 1;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    


    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (--) is used to decrement pointer location by 1");
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\nptr1--");
    
    ptr1--;   // same as ptr1 = pr1 - 1;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\n--ptr1");
    
    --ptr1;   // same as ptr1 = pr1 - 1;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    

    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (&) is used to get address of operand.");
    
    printf ("\n\n&ptr1\n");
    
    printf ("\nAddress of ptr1 = %p", &ptr1);
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    

    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (*) is used to dereference pointer and declare pointer as well.");
    
    printf ("\n\n*ptr1\n");
    
    printf ("\nValue at ptr1 = %d", *ptr1);
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    

    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (sizeof()) is used to get size of operand.");
    
    printf ("\n\nsizeof(ptr1)\n");
    
    printf ("\nSizeof ptr1 = %ld Bytes", sizeof(ptr1));
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");




/*---------------------------------------------------------------------------------------------------------------*/

    
    printf (WHT"\n!!!!!!!!!!!!!!!  Binary Operators with Pointers  !!!!!!!!!!!!!!\n");
    

    printf (CYN"\n!!!!!!!!!!!!!!!  Arithmetic Operators with Pointers  !!!!!!!!!!!!!!\n");
    
    printf ("\nThese are Arithmetic Operators : +, -, *, /, %%\n");
    
    printf ("\nWe can't use (*), (/), (%%) operators with pointers, this is foolishness...\n");
        
    printf (RED"\nCase I : pointers and integers with (+) and (-)\n"CYN);
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (+) is used to add integer times sizeof (data_type) to pointer");
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\nptr1 = ptr1 + 2 \t here,  2 * (4 Bytes) = 8 Bytes {val * sizeof (int)} is Added.");
    
    ptr1 = ptr1 + 2;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (-) is used to subtract integer from pointer");
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\nptr1 = ptr1 - 2 \t here,  2 * (4 Bytes) = 8 Bytes {val * sizeof (int)} is Subtracted.");
    
    ptr1 = ptr1 - 2;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    
    printf (RED"\n\nCase II : pointers and pointers with (+) and (-)\n"CYN);
    
    printf ("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf ("\nOperator (-) is used to get difference between two pointers");
    printf (" (Subtracting Two Pointers...)\n");
    
    ptr = array;
    ptr1 = array + 1;
    ptr2 = array + 2;
    ptr3 = array + 3;

    printf ("\nptr3 - ptr2 =  %ld units", ptr3 - ptr2);
    printf ("\nptr3 - ptr1 =  %ld units", ptr3 - ptr1);
    
    printf ("\n\nptr1 - ptr1 =  %ld units\n", ptr1 - ptr1);
    
    printf ("\nptr2 - ptr3 = %ld units", ptr2 - ptr3);
    printf ("\nptr1 - ptr3 = %ld units\n", ptr1 - ptr3);

    printf ("\nHere, Positive difference indicates pointer is SUCCEED's by difference.");
    printf ("\nHere, NO (Zero) difference indicates both pointers are SAME");
    printf ("\nHere, Negative difference indicates pointer is PRECED's by difference."); 
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    printf (RED"\nGenerel Note about Arithmetic Operators and Pointers : \n\n");
    
    printf ("We can't use *, /, %% operators with pointers in the case of pointers with integers\n");
    printf ("As there is no meaning to do these operations (meaningLess things)\n\n");

    printf ("Also in case of pointers with pointers, we do substraction to get difference between them,\n");
    printf ("but specially, we don't do addition of two pointers.\n");
    printf ("(which we used to do in pointers with integers) No use of this here\n");
    printf ("and *, /, %% operators also we don't use.\n\n");


/*---------------------------------------------------------------------------------------------------------------*/

    printf (GRN"\n!!!!!!!!!!!!!!!  Relational Operators with Pointers  !!!!!!!!!!!!!!\n");
    
    printf ("\nThese are Relational Operators : <,  <=,  >,  >=,  ==,  !=\n");
    printf ("Returns 1 if condition is true else returns 0\n");

    printf ("\nptr1  <   ptr2 : %d", ptr1 < ptr2);
    printf ("\nptr1  >   ptr2 : %d", ptr1 > ptr2);
    printf ("\nptr1  <=  ptr2 : %d", ptr1 <= ptr2);
    printf ("\nptr1  >=  ptr2 : %d", ptr1 >= ptr2);
    printf ("\nptr1  ==  ptr2 : %d", ptr1 == ptr2);
    printf ("\nptr1  !=  ptr2 : %d\n", ptr1 != ptr2);
    
/*---------------------------------------------------------------------------------------------------------------*/

    printf (YEL"\n!!!!!!!!!!!!!!!  Logical Operators with Pointers  !!!!!!!!!!!!!!\n");
    
    printf ("\nThese are Logical Operators : &&, ||, !\n");
    
    printf ("There is no such use of Logical Operators with Pointers.\n");
    printf ("They don't give any kind of error while compiling but...\n");
    printf ("using them with pointers is meaningLess.\n");

/*---------------------------------------------------------------------------------------------------------------*/
    
    printf (BLU"\n!!!!!!!!!!!!!!!  Bitwise Operators with Pointers  !!!!!!!!!!!!!!\n");
    
    printf ("\nThese are Bitwise Operators : &, |, <<, >>, ~, ^\n");
    
    printf ("When we use Bitwise operators with pointers they give ERROR.\n");
    printf ("Same as Logical, there is no use of Bitwise operators with pointers.\n\n");

/*---------------------------------------------------------------------------------------------------------------*/
   
    printf (MAG"\n!!!!!!!!!!!!!!!  Assignment Operators with Pointers  !!!!!!!!!!!!!!\n");
    
    printf ("\nThese are Assignments Operators : =, +=, -=, *=, /=, %%= \n");
    
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    
    printf ("\nOperator (=) is used to assign one pointer to another");
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    printf ("\nAddress of ptr2 = %p \t value at ptr2 = %d", ptr2, *ptr2);
    
    printf ("\n\nptr2 = ptr1");
    ptr2 = ptr1;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    printf ("\nAddress of ptr2 = %p \t value at ptr2 = %d", ptr2, *ptr2);
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    

    printf ("\nOperator (+=) is used to add integer to pointer");
    
    printf ("\nDon't use this operator with 2 pointers... This is Foolishness");

    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\nptr1 += 2");
    ptr1 += 2;   // same as ptr1 = pr1 + 2;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    

    printf ("\nOperator (-=) is used to suntract integer from pointer");
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    
    printf ("\n\nptr1 -= 2");
    ptr1 -= 2;   // same as ptr1 = pr1 - 2;
    
    printf ("\n\nAddress of ptr1 = %p \t value at ptr1 = %d", ptr1, *ptr1);
    

    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    

    printf ("\nAs we know, we can't do operations of *, /, %% with pointers");
    printf ("\nHence, we can't do operations of *=, /=, %%= with pointers");
    
    printf ("\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n"RESET);
    
/*---------------------------------------------------------------------------------------------------------------*/

}
