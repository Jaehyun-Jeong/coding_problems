#include <stdio.h>
#include <stdlib.h>


char* removeStars(char* s) {

    int i = 0, c = 0, counter = 0;
    char* ans;
    ans = (char*)malloc((100001)*sizeof(char));

    while(s[i]){
        if(s[i] != '*')
            counter++;
        else
            counter--;
        i++;
    }
    
    if(counter < 0){
        ans[0] = '\0';
    } else {
        ans[counter--] = '\0';

        while(i--){
            if(s[i] == '*')
                c++;
            else if(c > 0)
                c--;
            else
                ans[counter--] = s[i];
        }
    }

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
