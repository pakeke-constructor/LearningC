
/*

Question:

Can you bitshift a struct?


*/


typedef struct {
    unsigned long long int x;
    unsigned long long int y
} twolong;



int main(){
    twolong k;
    k = (k >> 0xfff); // Answer: No, you cant lol
    return 0;
}


