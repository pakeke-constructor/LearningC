
#ifndef LL_LINKED_LIST_HEADER

#define LL_LINKED_LIST_HEADER



struct LL_Node {
    struct LL_Node *next;
    char val;  
};


struct LL {
    struct LL_Node *head;
};



struct LL_Node *LL_next(
    //( struct LL_Node ) -->  LL_Node
);

char LL_gv(
    //( struct LL_Node ) --> char
);

void LL_add( struct LL *ll, char value
    //(struct LL, char) --> void
);

struct LL *LL_toLinkedList(
    //( int[?],  int size ) -->  LL   
);

struct LL *LL_LinkedList(
    //( char ) -->  LL
);

//struct LL_Node LL____Base;

#ifndef LL_LOOP // For looping. iters `node` as the node object.

#define LL_LOOP(__LL_ll) LL_Node *node = __LL_ll->head; \
for( ; node->next != LL____Base; node=node->next)

#endif

#endif
