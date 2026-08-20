#include <stdio.h>
#include <stdlib.h>

int countNegative(int n, int tab[]){
    int counter =0;
    for(int i=0;i<n;i++){
        if (tab[i] < 0){
            counter++;
        }
    }
    return counter;
}

int main()
{
    int tab[] = {4,-5,3,-3,-8};
    printf("%d\n", countNegative(5, tab));
    return 0;
}
