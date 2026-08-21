#include <stdio.h>
#include <stdlib.h>

int length(char txt[]){
    int i=0;
    while(txt[i] !=0){
        i++;
    }
    return i;
}

int isPalindromeStr(char txt[]){
    int n = length(txt);
    for(int i=0;i<n/2;i++){
        if (txt[i] != txt[n-1-i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("%d\n", isPalindromeStr("kajak"));
    printf("%d\n", isPalindromeStr("abba"));
    printf("%d\n", isPalindromeStr("Ala"));
    return 0;
}
