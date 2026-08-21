#include <stdio.h>
#include <stdlib.h>

int isVowel(char c){
    char vowels[] = "aeiouAEIOU";
    for (int i=0;vowels[i]!=0;i++){
        if(vowels[i] == c){
            return 1;
        }
    }
    return 0;
}

int isLetter(char c){
    if ('A' <= c && c <= 'Z')
        return 1;
    if ('a' <= c && c <= 'z')
        return 1;
    return 0;
}

int countConsonants(char txt[]){
    int counter =0;
    for(int i=0;txt[i] !=0;i++){
        if (isLetter(txt[i])==1 && isVowel(txt[i])==0){
            counter++;
        }
    }
    return counter;
}

int main()
{
    char s[] = "xyz";
    printf("%d\n", countConsonants(s));
    return 0;
}
