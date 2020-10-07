


// cd D:\PROGRAMMING\C\programs\learning
// gcc main.c -Wall -Wextra  

// a.exe


// -Wall -Wextra are compilation flags that provide extra warnings when compiling.
// They are often very helpful to have on.



#include <stdio.h>



#define LOOP(num) for(int i=0; i < num; i++)






int* sort(int* arr, int size){

    int ct = 1;

    int sze = sizeof(arr) / sizeof(arr[0]); // doesnt work, woops
                                    // because`arr` is ptr
    
    int auxiliary;
    
    while (ct > 0) {
        ct = 0;
        int sze = size / sizeof(int);
        for (int i = 0; i < (sze - 1); i++) {
            if (arr[i] > arr[i+1]) {
                auxiliary = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = auxiliary;
                ct ++;
            }
        }
    }
    return arr;
}


#ifndef ARRSIZE
    #define ARRSIZE 9
#endif



int main(){    
    int arr[ARRSIZE] = {2, 4, 7, 1, 1, 9, 4, 6, 1};

    sort(arr, ARRSIZE * sizeof(int));

    LOOP(sizeof(arr)/sizeof(arr[0])){
        // Lets see if they are in order
        int val = arr[i];
        printf("%d", val);
    }
    fflush(stdout);

    return 0;
}









