#include <iostream>
int main(){
    int n = 0, m = 0;
    char A[10001]={}, B[10001]={}, C[10002]={};
    std::cin >> A >> B;
    for(int i = 10000; i--;){
        if(A[i]) C[n++] = (C[n])?C[n]+A[i]-48:A[i];
        if(B[i]) C[m++] = (C[m])?C[m]+B[i]-48:B[i];
    }
    for(int i = 0; i < 10000; i++){
        if(!C[i]) break;
        else if(int(C[i])>57){
            C[i+1] = (C[i+1])?C[i+1]+1:'1';
            C[i] -= 10;
        }
    }
    for(int i = 10001; i--;) if(C[i]) std::cout << C[i];
}
