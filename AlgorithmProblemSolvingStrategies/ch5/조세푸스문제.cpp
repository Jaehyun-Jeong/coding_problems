#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;


struct ListNode {
    int element;
    ListNode *prev, *next;
};


void deleteNode(ListNode* node){
    node->prev->next = node->next;
    node->next->prev = node->prev;
}


void recoverNode(ListNode* node){
    node->prev->next = node;
    node->next->prev = node;
}


void solve(int N, int K){
}


int main(){
    return 0;
}
