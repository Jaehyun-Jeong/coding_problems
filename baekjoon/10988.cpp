#include <iostream>
int main(void){
    int strIdx = 0, i = 0;
    char str[101];
    std::cin >> str;
    while(str[++strIdx]){}
    strIdx--;
    while(str[i++]==str[strIdx--]){
        if(i >= strIdx){
            std::cout << 1;
            return 0;
        }
    }
    std::cout << 0;
}
