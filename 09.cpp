//
// Created by shenxc@xiaopeng.com on 2024/02/27 0027.
//
#include "ds.h"
#include "bits/stdc++.h"
SndPointer create_singlenode( const std::vector<int> &data){
    auto *head = (SndPointer)malloc(sizeof (SndPointer));
    SndPointer p = head;
    for (int item: data){
        auto *cur = (SndPointer)malloc(sizeof(SndPointer));
        cur->data = item;
        cur->next = NULL;
        p->next = cur;
        p = cur;
    }
    return head;
}

//int main(){
//    std::vector<int> data{1,2,3,4,5,6,7,8,9,10};
//    SndPointer sndPointer = create_singlenode(data);
//    int count = search_k_snd2(sndPointer,8);
//    printf("result: %d",count);
//}

int search_k_snd(SndPointer sndPointer,int k){
    SndPointer head = sndPointer;
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    int num = 0;
    if(count > k) {
        num = count - k;
    }
    head = sndPointer;
    while(num > 0){
        head = head->next;
        num--;
    }
    return head->data;
}

int search_k_snd2(SndPointer sndPointer,int k) {
    SndPointer p1 = sndPointer;
    SndPointer p2 = sndPointer;
    int cnt = 0;
    while(p1 != NULL) {
        p1 = p1->next;
        cnt++;
        if(cnt > k) {
            p2 = p2->next;
        }
    }
    return p2->data;
}