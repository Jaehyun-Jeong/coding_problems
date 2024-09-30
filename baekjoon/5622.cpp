#include <iostream>
int main(){
    int n = 0;
    char N[16];
    std::cin >> N;
    for(int i = 0; i < 15; i++){
        if(64<N[i] && N[i]<80) n += (N[i]-65)/3+3;
        else if(79<N[i] && N[i]<84) n += 8; 
        else if(83<N[i] && N[i]<87) n += 9; 
        else if(86<N[i] && N[i]<91) n += 10; 
        else break;
    }
    std::cout << n;
}
