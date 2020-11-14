

#include <stdio.h>

#ifndef LOOP

#define LOOP(num) for(int i=0; i < num; ++i)

#endif

#ifndef DEFINED

#define DEFINED 1
#include "LL.h"

#endif



struct LL_Node *LL_next(struct LL_Node *node){
    /*
        Returns the next node in the Linked list structure.
    */
    return node->next;
}

char LL_gv(struct LL_Node *node){
    return node->val;
}


void LL_add(struct LL *ll, char value){
    struct LL_Node new;
    new.val = value;
    ll->head->next = &new;
    ll->head = &new;
}


struct LL *LL_toLinkedList(char* string, int size){
    /*
    Converts an array of integers into a linked list.
    Takes pointer to int as first parameter, and size of list
    as second parameter.
    */

    struct LL *newLL;
    struct LL_Node q;
    q.next = 0;
    newLL->head = NULL;

    int sze_1 = size - 1;
    printf("got to loop!\n");

    char* s;
    for ( s=&string[0]; *s != '\0'; s++ ){
        printf("%s <- str char \n", *s);
        LL_add(newLL, *s);
    }

    return newLL;
}

struct LL *LL_LinkedList(char *val){
    /*
    Creates a linked list object from
    */
    return LL_toLinkedList(val, 1);
}







