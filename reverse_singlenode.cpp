//
// Created by shenxc@xiaopeng.com on 2024/03/7 0007.
//
#include "ds.h"
#include "bits/stdc++.h"
SndPointer reverse_singlenode(SndPointer singleNode){
    SndPointer cur = singleNode;
    SndPointer pre = NULL;
    while(cur != NULL){
        SndPointer temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}

//int main(){
//    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
//    int* data[] = {&a, &b, &c, &d, &e, &f};
//    SndPointer sndPointer=create_single_node1(data,6);
//    SndPointer result = reverse_singlenode(sndPointer);
//    std:: cout << result;
//}


SndPointer create_single_node1(int* data[], int n){
    SndPointer current = (SndPointer)malloc(sizeof(SndPointer));
    current->data = NULL;
    SndPointer head = current;
    for (int i = 0; i < n; i++){
        auto  *sndPointer = (SndPointer)malloc(sizeof(SndPointer));
        sndPointer->data= data[i];
        sndPointer->next = NULL;

        current->next = sndPointer;
        current = sndPointer;
    }
    return head;
}