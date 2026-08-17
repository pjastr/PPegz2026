#include <stdio.h>
#include <stdlib.h>

int seqE(int n){
    if (n== 0)
        return 1;
    if (n%2 == 0)
        return seqE(n-1)+2*n;
    return seqE(n-1)+1;
}

int main()
{
    printf("%d\n", seqE(0));
    printf("%d\n", seqE(1));
    printf("%d\n", seqE(2));
    printf("%d\n", seqE(3));
    printf("%d\n", seqE(4));
    return 0;
}
