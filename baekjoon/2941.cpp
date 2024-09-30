#include <iostream>
int main(){
    int n = 0;
    char W[101];
    std::cin >> W;
    for(int i = 0; i < 100; i++){
        if((W[i] == 'c' && W[i+1] == '=') ||
           (W[i] == 'c' && W[i+1] == '-') ||
           (W[i] == 'd' && W[i+1] == '-') ||
           (W[i] == 'l' && W[i+1] == 'j') ||
           (W[i] == 'n' && W[i+1] == 'j') ||
           (W[i] == 's' && W[i+1] == '=') ||
           (W[i] == 'z' && W[i+1] == '=')){
            n++;
            i += 1;
        }
        else if(W[i] == 'd' && W[i+1] == 'z' && W[i+2] == '='){
            n++;
            i += 2;
        }
        else if(96<W[i] && W[i]<123) n++;
        else break;
    }
    std::cout << n;
}
