#include <stdio.h>
#include <stdlib.h>

int arraySum(int n, int tab[]){
    int temp = 0;
    for (int i=0;i<n;i++){
        temp += tab[i];
    }
    return temp;
}

int main()
{
    int tab[] = {10,3,7};
    printf("%d\n", arraySum(3, tab));
    return 0;
}
