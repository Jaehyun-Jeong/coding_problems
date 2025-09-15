#include <iostream>
using namespace std;


void deleteNode(ListNode* node){
    node->prev->next = node->next;
    node->next->prev = node->prev;
}


void recoverNode(ListNode* node){
    node->prev->next = node;
    node->next->prev = node;
}


int main(){
    return 0;
}
