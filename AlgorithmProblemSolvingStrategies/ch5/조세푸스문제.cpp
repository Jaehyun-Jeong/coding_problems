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


int sizeLinkedList(ListNode* start){
    ListNode *head, *tmp;
    int size = 1;

    head = start;
    tmp = head->next;

    while(head != tmp){
        ++size;
        tmp = tmp->next;
    }

    return size;
}


void solve(int N, int K){
    ListNode *head, *tmp;

    tmp = new ListNode;
    head = tmp;
    head->element = 1;
    for(int i = 2; i <= N; ++i){
        tmp->next = new ListNode;
        tmp->next->prev = tmp;
        tmp->next->element = i;
        tmp = tmp->next;
    }
    tmp->next = head;
    head->prev = tmp;

    while(sizeLinkedList(head) != 2){
        tmp = head;
        head = head->next;
        deleteNode(tmp);
        for(int i = 0; i < K-1; ++i)
            head = head->next;
    }

    cout << head->element << ' ' << head->next->element << endl;
}


int main(){

    // 간단한 테스트
    solve(6, 3);
    
    // 중간 난이도 테스트
    solve(40, 3);
    
    // 어려운 난이도 테스트 예시 (N, K 모두 큼)
    solve(100, 7);
    solve(250, 13);
    solve(500, 25);
    solve(999, 1000); // 최대 난이도 근처
    solve(1000, 999); // 또 다른 극한 케이스


    return 0;
}
