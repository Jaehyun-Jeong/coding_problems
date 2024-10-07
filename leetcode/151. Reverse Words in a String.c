#include<stdio.h>
#include<stdlib.h>


char* reverseWords(char* s) {
    int c = 0, wc, i;
    char *ans, *word;

    while(s[c++]){}
    ans = (char*)malloc(c*sizeof(char));
    word = (char*)malloc(c*sizeof(char));
    c -= 2;

    i = 0;
    while(c >= 0){
        while(s[c] == ' ' && c){
            c--;
        }
        wc = 0;
        while(s[c] != ' ' && c >= 0){
            word[wc++] = s[c--];
        }
        while(wc>0){
            ans[i++] = word[--wc];
        }
        ans[i++] = ' ';
    }
    ans[i] = '\0';

    return ans;
}

int main(void){
    
    char s[] = "the sky is blue";
    printf("%s\n", reverseWords(s));

    return 0;
}
