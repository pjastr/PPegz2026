#include <stdio.h>
#include <stdlib.h>

char upper(char c){
    if ('a' <= c && c <= 'z'){
        return c-32;
    }
    return c;
}

void capitalizeWords(char txt[]){
    if(txt[0] == 0)
        return;
    txt[0] = upper(txt[0]);
    for(int i=0;txt[i+1]!=0;i++){
        if (txt[i] == ' '){
            txt[i+1] = upper(txt[i+1]);
        }
    }
}

int main()
{
    char t1[] = "ala ma kota";
    printf("%s\n", t1);
    capitalizeWords(t1);
    printf("%s\n", t1);
    char t2[] = "programowanie w c";
    printf("%s\n", t2);
    capitalizeWords(t2);
    printf("%s\n", t2);
    return 0;
}
