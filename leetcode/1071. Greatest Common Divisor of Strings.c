#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gcdOfStrings(char* str1, char* str2) {

    int i, match = 0;
    char* ans, *check1, *check2;
    ans = (char*)malloc(1001*sizeof(char));
    check1 = (char*)malloc(2001*sizeof(char));
    check2 = (char*)malloc(2001*sizeof(char));

    for(i = 0; i < strlen(str1); i++){
        check1[i] = str1[i];
        check2[strlen(str2)+i] = str1[i];
    }
    for(i = 0; i < strlen(str2); i++){
        check1[strlen(str1)+i] = str2[i];
        check2[i] = str2[i];
    }
    check1[strlen(str1) + strlen(str2)] = '\0';
    check2[strlen(str1) + strlen(str2)] = '\0';
    if(strcmp(check1, check2) == 0)
        match = 1;
    free(check1);
    free(check2);

    if(!match){
        return "";
    }

    if(strcmp(str1, str2) == 0){
        return str1;
    }

    if(strlen(str1) < strlen(str2)){
        ans = &str2[strlen(str1)];
        return gcdOfStrings(str1, ans);
    } else {
        ans = &str1[strlen(str2)];
        return gcdOfStrings(ans, str2);
    }
}

int main(void){

    char* s;
    char word11[] = "ABCABC";
    char word12[] = "ABC";
    s = gcdOfStrings(word11, word12);
    printf("%s\n", s);

    char word21[] = "ABABAB";
    char word22[] = "ABAB";
    s = gcdOfStrings(word21, word22);
    printf("%s\n", s);

    char word31[] = "leet";
    char word32[] = "code";
    s = gcdOfStrings(word31, word32);
    printf("%s\n", s);

    return 0;
}
