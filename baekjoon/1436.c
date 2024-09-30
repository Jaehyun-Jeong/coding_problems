#include <stdio.h>
#include <math.h>
#define MAXSTRINGSIZE 100

int main(){
    int n, nn = 665, tempNn, cnt = 0;

    scanf("%d", &n);

    while(cnt < n){
        tempNn = ++nn;
        while(tempNn > 665){
            if((tempNn - 666) % 1000 == 0){
                cnt++;
                break;
            }
            tempNn = tempNn/10;
        }
    }

    printf("%d\n", nn);

    return 0;
}
