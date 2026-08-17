#include <stdio.h>
#include <stdlib.h>

int countDigits(int n){
    if (n == 0){
        return 1;
    }
    if (n<=9){
        return 1;
    }
    return 1+ countDigits(n/10);
}

int main()
{
    printf("%d\n", countDigits(0));
    printf("%d\n", countDigits(5));
    printf("%d\n", countDigits(12));
    printf("%d\n", countDigits(465600));
    return 0;
}
