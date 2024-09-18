#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* removeStars(char* s) {

    int i = 0, c = 0;
    char* ans;
    ans = (char*)malloc((100001)*sizeof(char));

    for(i = 0; i < strlen(s); i++){
        if(s[i] != '*'){
            if(c >= 0)
                ans[c] = s[i];
            c++;
        } else {
            c--;
        }
    }
    ans[c] = '\0';

    return ans;
}

int main(void){

    char* s;

    char s1[] = "leet**cod*e";
    s = removeStars(s1);
    printf("%s\n", s);
    // "lecoe"

    char* s2 = "erase*****";
    s = removeStars(s2);
    printf("%s\n", s);
    // ""

    char* s3 = "leet**cod*e";
    s = removeStars(s3);
    printf("%s\n", s);
    // "lecoe"

    return 0;
}
