#include <stdio.h>
#include <stdlib.h>

int power(int base, int exp){
    if (exp == 0)
        return 1;
    return power(base, exp-1) * base;
}

int main()
{
    printf("%d\n", power (0,0));
    printf("%d\n", power (4,0));
    printf("%d\n", power (2,5));
    printf("%d\n", power (-2,3));
    return 0;
}
