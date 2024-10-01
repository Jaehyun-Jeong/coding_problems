#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char* reverseVowels(char* s) {
    int c = 0, i = 0;
    char tmp, a;
    char* ans;
    
    while(s[c++]){}
    ans = (char*)malloc((c-1)*sizeof(char));
    c -= 2;
    
    while(i < c){

        a = isalpha(s[i]) ? tolower(s[i]) : '0';
        while(a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u' && i < c){
            if(s[++i]){
                a = isalpha(s[i]) ? tolower(s[i]) : '0';
            }
        }

        a = isalpha(s[c]) ? tolower(s[c]) : '0';
        while(a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u' && c >= 0){
            if(s[--c]){
                a = isalpha(s[c]) ? tolower(s[c]) : '0';
            }
        }

        if(i > c) break;

        tmp = s[i];
        s[i++] = s[c];
        s[c--] = tmp;
    }
    
    for(i = 0; s[i]; i++){
        ans[i] = s[i];
    }

    return ans;
}

int main(void){

    char a[] = ".,";

    printf("%s\n", reverseVowels(a));

    return 0;
}
