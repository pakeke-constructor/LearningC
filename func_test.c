


#include <stdio.h>


void do_something(void){
    printf("do_something called");
}

int main(char* a){
    void(*kappa_ptr)(void);
    kappa_ptr = &do_something;

    (*kappa_ptr)();
    (kappa_ptr)();
}

