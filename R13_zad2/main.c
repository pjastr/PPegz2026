#include <stdio.h>
#include <stdlib.h>

int sumTransformed(int tab[], int n, int (*fun)(int)){
    int sum =0;
    for(int i=0;i<n;i++){
        sum += fun(tab[i]);
    }
    return sum;
}

int square(int a){
    return a*a;
}

int main()
{
    int tab[] = {1,2,3};
    printf("%d\n", sumTransformed(tab, 3, square));
    return 0;
}
