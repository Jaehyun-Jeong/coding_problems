#include <stdio.h>


char* removeStars(char* s) {

    int i = 0, c, ansCounter;
    char ans[100001];
    char* ptrAns;

    while(s[i]){
        i++;
    }

    ansCounter = i;
    ans[ansCounter--] = '\0';

    while(i--){
        if(s[i] == '*')
            c++;
        else if(c > 0)
            c--;
        else
            ans[ansCounter--] = s[i];
    }

    ptrAns = &ans[ansCounter+1];

    return ptrAns;
}

int main(void){

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
