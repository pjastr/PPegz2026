#include <stdio.h>
#include <stdlib.h>

int popDigit(int* number){
    int last = (*number) %10;
    (*number) /=10;
    return last;
}

int main()
{
    int n = 123400;
    printf("n: %d\n", n);
    printf("last: %d\n", popDigit(&n));
    printf("n: %d\n", n);
    return 0;
}
