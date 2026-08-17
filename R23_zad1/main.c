#include <stdio.h>
#include <stdlib.h>

int collatzSteps(int n){
    if (n==1)
        return 0;
    int counter = 0;
    while (n != 1){
        if (n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
        counter++;
    }
    return counter;
}

int main()
{
    printf("%d\n", collatzSteps(6));
    printf("%d\n", collatzSteps(8));
    return 0;
}
