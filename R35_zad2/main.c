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

void removeVowels(char txt[]){
    int i=0,j=0;
    for(i=0;txt[i]!=0;i++){
        if (isVowel(txt[i]) == 0){
            txt[j] = txt[i];
            j++;
        }
    }
    txt[j] = 0;
}

int main()
{
    char s1[] = "Ala ma Auto";
    printf("%s\n", s1);
    removeVowels(s1);
    printf("%s\n", s1);
    return 0;
}
