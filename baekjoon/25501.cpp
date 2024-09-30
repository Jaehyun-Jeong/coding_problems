#include <iostream>
#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r, int *c){
    *c += 1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, c);
}

int isPalindrome(const char *s, int *c){
    return recursion(s, 0, strlen(s) - 1, c);
}

int main(void){
    int v, num;
    int *c = &v;
    char input[1001];

    std::cin >> num;
    for(int i = 0; i < num; i++){
        v = 0;
        std::cin >> input;
        std::cout << isPalindrome(input, c) << ' ' << v << '\n';
    }
}
