#include <stdio.h>
#include <stdlib.h>

int allSatisfy(int tab[], int n, int (*condition)(int)){
    for(int i=0;i<n;i++){
        if (condition(tab[i])==0){
            return 0;
        }
    }
    return 1;
}

int foo(int a){
    if(a>0)
        return 1;
    return 0;
}

int main()
{
    int tab[] = {3,5,1};
    printf("%d\n", allSatisfy(tab, 3, foo));
    return 0;
}
