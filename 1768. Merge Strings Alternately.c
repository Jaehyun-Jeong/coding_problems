#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2){
    int word1c = 0, word2c = 0, c = 0;
    char* ans;
    ans = (char*)malloc(101*sizeof(char));
    
    while(word1[word1c] || word2[word2c]){
        if(word1[word1c])
            ans[c++] = word1[word1c++];
        if(word2[word2c])
            ans[c++] = word2[word2c++];
    }
    ans[c] = '\0';

    return ans;
}

int main(void){

    char* s;
    char word11[] = "abc";
    char word12[] = "pqr";
    s = mergeAlternately(word11, word12);
    printf("%s\n", s);

    char word21[] = "ab";
    char word22[] = "pqrs";
    s = mergeAlternately(word21, word22);
    printf("%s\n", s);

    char word31[] = "abcd";
    char word32[] = "pq";
    s = mergeAlternately(word31, word32);
    printf("%s\n", s);

    return 0;
}
