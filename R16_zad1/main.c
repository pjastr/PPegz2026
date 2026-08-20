#include <stdio.h>
#include <stdlib.h>

void scaleArray(int n, int tab[], int factor){
    for(int i=0;i<n;i++){
        tab[i] *= factor;
    }
}

int main()
{
    int tab[] = {4,2,3};
    scaleArray(3,tab,-2);
    return 0;
}
