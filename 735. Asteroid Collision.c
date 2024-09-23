#include <stdio.h>
#include <stdlib.h>

int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int i = 0, c = 0;
    int* ans;
    ans = (int*)malloc(asteroidsSize*sizeof(int));

    while(i < asteroidsSize){
        if(c == 0)
            ans[c++] = asteroids[i++];

        if(asteroids[i] < 0 && ans[c-1] > 0){
            if(-asteroids[i] == ans[c-1]){
                c--;
                i++;
            } else if(-asteroids[i] < ans[c-1]){
                i++;
            } else if(-asteroids[i] > ans[c-1]){
                c--;
            } else {
                ans[c++] = asteroids[i++];
            }
        } else if(i < asteroidsSize) {
            ans[c++] = asteroids[i++];
        }
    }

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

    for(int i = 0; i < returnSize; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    int asteroids04[] = {1, -1, 1, -2}, asteroids04Size = 4;
    ans = asteroidCollision(asteroids04, asteroids04Size, ptrReturnSize);

    for(int i = 0; i < returnSize; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}
