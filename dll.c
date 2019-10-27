
                    // DOUBLY LINKED_LIST PRESENTATION //

#include <stdio.h>
#include <stdlib.h>  //for using dynamic memory allocation methods (malloc, free)


//declaring structure for a node in linked list.

struct node {
    int data;                    
    struct node * next, * prev;  //self-referrencial pointers
};


//this method returns total no of nodes's in linked list.

int totalNodes(struct node *headnd) {
    struct node * temp = headnd;
    int cnt = 0;
    while (temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}


//this method create's node and returns to calling function.
//which takes parameter as data which we want to store in our node.

struct node * createNode(int x) {
    struct node * newnd = (struct node *)malloc(sizeof(struct node));
    newnd->next = NULL;
    newnd->prev = NULL;
    newnd->data = x;
    return newnd;
}


//this method add's node to linked list in forward direction.
//one after other like     NULL <-- 1 --> 2 --> 3 --> 4 --> NULL
//                                    <--   <--   <--
//which takes parameter as data & headnd pointer and returns headnd.

struct node * addNode(int x, struct node * headnd) {
    struct node * tempnd;
    struct node * newnd = createNode(x);
    if (headnd == NULL) {
        headnd = tempnd = newnd;
    } else {
        tempnd->next = newnd;
        newnd->prev = tempnd;
        tempnd = newnd;
    }
    return headnd;
}


//this method add's node to linked list @ Begigning of list.
//which takes parameter as data & headnd pointer and returns headnd.

struct node * addAtBegining(int x, struct node * headnd) {
    struct node * newnd = createNode(x);
    newnd->next = headnd;
    headnd->prev = newnd;
    headnd = newnd;
    return headnd;
}


//this method add's node to linked list @ End of list.
//which takes parameter as data & headnd pointer and returns headnd.

struct node * addAtEnd(int x, struct node * headnd) {
    struct node * newnd = createNode(x);
    struct node * tempnd = headnd;
    
    while (tempnd->next != NULL) {
        tempnd = tempnd->next;
    }

    tempnd->next = newnd;
    newnd->prev = tempnd;
    return headnd;
}


//this method add's node to linked list In-Between of list.
//which takes parameter as data, position where we want to add node & headnd pointer
//and returns headnd.

struct node * addInBetween(int x, int pos, struct node * headnd) {
    if (pos == 1) {
        struct node * head = addAtBegining(x, headnd);
        return head;
    } else if (pos == (totalNodes(headnd) + 1)) {
        struct node * head = addAtEnd(x, headnd);
        return head;
    } else {
        struct node * tempnd = headnd;
        int cnt = 2;
        while (cnt < pos) {
            tempnd = tempnd->next;
            cnt++;
        }
        struct node * newnd = createNode(x);
        newnd->next = tempnd->next;
        newnd->next->prev = newnd;
        tempnd->next = newnd;
        newnd->prev = tempnd;
        return headnd;
    }
}


//this method removes's node @ Begigning of list.
//which takes parameter as headnd pointer and returns headnd;

struct node * removeAtBegining(struct node * headnd) {
    struct node * tempnd = headnd->next;
    free(headnd);
    tempnd->prev = NULL;
    headnd = tempnd;
    return headnd;
}


//this method removes's node @ End of list.
//which takes parameter as headnd pointer and returns headnd;

struct node * removeAtEnd(struct node * headnd) {
    struct node * tempnd = headnd;
    while (tempnd->next->next != NULL) {
        tempnd = tempnd->next;
    }
    free(tempnd->next);
    tempnd->next = NULL;
    return headnd;
}


//this method removes's node In-Between of list.
//which takes parameter as postion of node which we want to remove from list & 
//headnd pointer and returns headnd;

struct node * removeInBetween(int pos, struct node * headnd) {
    if (pos == 1) {
        struct node * head = removeAtBegining(headnd);
        return head;
    } else if (pos == totalNodes(headnd)) {
        struct node * head = removeAtEnd(headnd);
        return head;
    } else {
        struct node * tempnd = headnd;
        int cnt = 2;
        while (cnt < pos) {
            tempnd = tempnd->next;
            cnt++;
        }
        struct node *nextnode = tempnd->next->next;
        free(tempnd->next);
        tempnd->next = nextnode;
        nextnode->prev = tempnd;
        return headnd;
    }
}


//this method print's whole list in forward direction.

void printForward(struct node * head) {
    struct node * temphead = head;
    while (temphead != NULL) {
        printf("--> %d ", temphead->data);
        temphead = temphead->next;
    }
    printf("\n\n");
}


//this method print's whole list in reverse direction.

void printReverse(struct node * head) {
    struct node * temphead = head;
    while (temphead->next != NULL) {
        temphead = temphead->next;
    }

    while (temphead != NULL) {
        printf("--> %d ", temphead->data);
        temphead = temphead->prev;
    }
    printf("\n\n");
}


//this method print's whole list with previous, current & next pointer for
//better visualization of "How pointers of linked-list are connected to each other"
//using this, the actual concept of doubly linked list can be clear to user.

void printWithAddresses(struct node * head) {
    printf("\nPrinting Linked-List with Its pointers : \n");
    printf("\nPrevious :\tCurrent :\tNext :\t\tData :\t\n");
    struct node * temphead = head;
    while (temphead != NULL) {
        printf("%14p\t%14p\t%14p\t%d\n", temphead->prev, temphead, temphead->next, temphead->data);
        temphead = temphead->next;
    }
}


void main (void) {
    struct node * headnd = NULL;
  
    //createting linked-list with 5 nodes.
    headnd = addNode(9, headnd);
    headnd = addNode(10, headnd);
    headnd = addNode(11, headnd);
    headnd = addNode(12, headnd);
    headnd = addNode(13, headnd);
    
    //printing linked-list in forward direction.
    printf("\nPrinting Linked-List in Forward direction : \n");
    printForward(headnd);
    
    printf("============================================================\n");

    //printing linked-list in reverse direction.
    printf("\nPrinting Linked-List in Reverse direction : \n");
    printReverse(headnd);
    
    printf("============================================================\n");
    
    //printing linked-list with all its addresses.
    printWithAddresses(headnd);
    
    printf("============================================================\n");
    printf("============================================================\n");

    //adding node at begining of list
    printf("\nadding node at begining...\n");
    headnd = addAtBegining(8, headnd);
    printForward(headnd);
    
    printf("============================================================\n");

    //adding node at end of list
    printf("\nadding node at end...\n");
    headnd = addAtEnd(14, headnd);
    printForward(headnd);
    
    printf("============================================================\n");

    //adding node In-between of list
    printf("\nadding node at 4th position...\n");
    headnd = addInBetween(0, 4, headnd);
    printForward(headnd);
    
    printf("============================================================\n");
    printf("============================================================\n");
    
  
    //removing node at begining of list
    printf("\nremoving node at begining...\n");
    headnd = removeAtBegining(headnd);
    printForward(headnd);
    
    printf("============================================================\n");

    //removing node at end of list
    printf("\nremoving node at end...\n");
    headnd = removeAtEnd(headnd);
    printForward(headnd);
    
    printf("============================================================\n");

    //removing node In-between of list
    printf("\nremoving node at 3rd position...\n");
    headnd = removeInBetween(3, headnd);
    printForward(headnd);

    printf("########## THE END #############");
}
