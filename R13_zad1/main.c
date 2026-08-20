#include <stdio.h>
#include <stdlib.h>

void reverseInPlace(int n, int tab[]){
    for (int i=0;i<n/2;i++){
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
}

void printTable(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {4,-5,2,11};
    printTable(4, tab);
    reverseInPlace(4,tab);
    printTable(4, tab);
    int tab2[] = {-30,4,-5,2,11};
    printTable(5, tab2);
    reverseInPlace(5,tab2);
    printTable(5, tab2);
    return 0;
}
