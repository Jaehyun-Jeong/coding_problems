#include <stdio.h>

int main(){

    int A, B, C, D, E, F, x, y;
    scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);

    x = (C*E - B*F)/(A*E - B*D);
    y = (A*F - C*D)/(A*E - B*D);

    printf("%d %d", x, y); 

    return 0;
}
