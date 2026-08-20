#include <stdio.h>
#include <stdlib.h>

void minMaxArray(int tab[], int n, int* pMin, int* pMax){
    int min = tab[0], max = tab[0];
    for(int i=1;i<n;i++){
        if (tab[i] > max){
            max = tab[i];
        }
        if (tab[i] < min){
            min = tab[i];
        }
    }
    *pMin = min;
    *pMax = max;
}

int main()
{
    int tab[] = {-4,-1,-9};
    int p1,p2;
    minMaxArray(tab, 3, &p1, &p2);
    printf("%d %d \n", p1, p2);
    return 0;
}
