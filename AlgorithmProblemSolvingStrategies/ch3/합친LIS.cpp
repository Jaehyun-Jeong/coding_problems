#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

void printArr(int arr[], int len){
    for(int i = 0; i < len; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}


int cache[201];
int n = 5, m = 3, k;
int S[200];
int S1[] = {10, 20, 30, 1, 2};
int S2[] = {10, 20, 30};


void merge(int S[200], int s1[100], int s2[100]){
    int i = 0, j = 0, counter = 0;
    k = 0;

    while(i < n || j < m){

        if(i >= n && j < m)
            S[counter++] = s2[j++];
        else if((j >= m && i < n) || (s1[i] < s2[j]))
            S[counter++] = s1[i++];
        else{
            if(s1[i] == s2[j]){
                ++i;
                --k;
            }
            S[counter++] = s2[j++];
        }
    }

    k += n + m;
}


int lis3(int start, int S[], int len, int& lis[]){

    int& ret = cache[start+1];
    if(ret != -1) return ret;

    ret = 1;
    for(int next = start+1; next < len; ++next)
        if(start == -1 || S[start] < S[next]){
            lis[ret-1] = S[next];
            ret = max(ret, lis3(next, S, len, lis) + 1);
        }

    return ret;
}


int solve();


int main(){

    memset(cache, -1, sizeof(cache));
    cache[0] = -987654321;

    cout << lis3(0) << endl;;

    return 0;
}
