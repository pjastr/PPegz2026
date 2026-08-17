#include <stdio.h>
#include <stdlib.h>

int largestDigit(int n){
    int digit = n % 10;
    while (n !=0){
        n /= 10;
        int currentDigit = n %10;
        if (currentDigit > digit){
            digit = currentDigit;
        }
    }
    return digit;
}

int main()
{
    printf("%d\n", largestDigit(0));
    printf("%d\n", largestDigit(5));
    printf("%d\n", largestDigit(1234));
    printf("%d\n", largestDigit(9072));
    return 0;
}
