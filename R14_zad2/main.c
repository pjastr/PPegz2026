#include <stdio.h>
#include <stdlib.h>

void divmod(int a, int b, int* quotient, int* remainder){
    *quotient = a/b;
    *remainder = a%b;
}

int main()
{
    int a=-17;
    int b=5;
    int q,r;
    divmod(a,b,&q,&r);
    printf("%d %d",q, r);
    return 0;
}
