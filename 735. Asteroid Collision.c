#include <stdio.h>
#include <stdlib.h>

int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int i = asteroidsSize-1, c = asteroidsSize;
    int* ans;

    while(i > 0){
        if(asteroids[i] < 0 && asteroids[i-1] > 0){
            c--;
            if(asteroids[i] == -asteroids[i-1]){
                i--;
                c--;
            } else
                asteroids[i-1] = abs(asteroids[i-1]) < abs(asteroids[i]) ? asteroids[i] : asteroids[i-1];
        }
        i--;
    }

    ans = (int*)malloc((c)*sizeof(int));
    ans = asteroids;

    *returnSize = c;

    return ans;
}

int main(void){

    int* ans, returnSize;
    int asteroids01[] = {10, 2, -5}, asteroids01Size = 3, *ptrReturnSize = &returnSize;
    ans = asteroidCollision(asteroids01, asteroids01Size, ptrReturnSize);

    for(int i = 0; i < returnSize; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    int asteroids02[] = {5, 10, -5}, asteroids02Size = 3;
    ans = asteroidCollision(asteroids02, asteroids02Size, ptrReturnSize);

    for(int i = 0; i < returnSize; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    int asteroids03[] = {8, -8}, asteroids03Size = 2;
    ans = asteroidCollision(asteroids03, asteroids03Size, ptrReturnSize);

    printf("returnSize: %d\n", returnSize);

    for(int i = 0; i < returnSize; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");


    return 0;
}
