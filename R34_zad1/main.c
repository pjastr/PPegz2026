#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n){
    if (n == 1)
        return 1;
    return n*n + sumSquares(n-1);
}

int main()
{
    printf("%d\n", sumSquares(3));
    printf("%d\n", sumSquares(1));
    return 0;
}
