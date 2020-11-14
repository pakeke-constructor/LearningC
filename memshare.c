


/*
lakmatiol's code from the python discord.

Basically, the following code will allow two pointers to access the
same memory block, whilst reading from different data types.


In other words, the same block of memory has been cast to 2 types *simultaneously.*
struct `q` and `a` are functionally equivalent to having 2 nested structs inside a union object.
*/


int main()
{
    struct A {
        char b;
    };
    
    struct Q {
        double a;
    };

    struct Q u;
    u.a = 2.51f;

    struct A* evil;
    evil = ((struct A*) &u);

    printf(evil -> b);

    return 0;
}


