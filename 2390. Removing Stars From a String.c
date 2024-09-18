#include <stdio.h>


char* removeStars(char* s) {

    int i = 0, c, counter = 0;

    while(s[i]){
        i++;
    }
    counter = i;
    s[counter--] = '\0';

    while(i--){
        if(s[i] == '*')
            c++;
        else if(c > 0)
            c--;
        else
            s[counter--] = s[i];
    }
    s = &s[counter+1];

    return s;
}

int main(void){

    char* s;

    char* s1 = "leet**cod*e";
    removeStars(s1);
    printf("%s\n", s1);
    // "lecoe"

    char s2[] = "erase*****";
    s = removeStars(s2);
    printf("%s\n", s);
    // ""

    char s3[] = "leet**cod*e";
    s = removeStars(s3);
    printf("%s\n", s);
    // "lecoe"

    return 0;
}
