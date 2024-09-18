#include <stdio.h>


char* removeStars(char* s) {

    int i = 0, c, ansCounter = 0;
    char ans[100001];

    while(s[i]){
        i++;
    }

    while(i--){
        if(s[i] == '*')
            c++;
        else if(c > 0)
            c--;
        else
            ans[ansCounter++] = s[i];
    }
    ans[ansCounter] = '\0';

    i = 0;
    while(ansCounter--)
        s[i++] = ans[ansCounter];
    s[i] = '\0';

    return s;
}

int main(void){

    char* p;

    char s1[] = "leet**cod*e";
    printf("%s\n", removeStars(s1));
    // "lecoe"

    char s2[] = "erase*****";
    printf("%s\n", removeStars(s2));
    // ""

    char s3[] = "leet**cod*e";
    printf("%s\n", removeStars(s3));
    // "lecoe"

    return 0;
}
