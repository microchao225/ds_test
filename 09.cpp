//
// Created by shenxc@xiaopeng.com on 2024/02/27 0027.
//
#include "ds.h"
#include "bits/stdc++.h"
int main(){
    std::vector<int> data = {1,2,3,4,5,6,7};
    SndPointer sndPointer = create_linked_node(data);
//    print_linked_node(sndPointer);
    two_pointer_find_k(sndPointer,7);
}

/**
 * 暴力解
 * @param sndPointer
 * @param k
 * @return
 */
int find_k_bf(SndPointer sndPointer,int k){
    std::vector<int> vector = convert_to_vector(sndPointer);
    int size = vector.size();
    std::cout << vector[size-k];
}

/**
 * 双指针法
 * @param sndPointer
 * @param k
 * @return
 */
int two_pointer_find_k(SndPointer sndPointer,int k){
    SndPointer first_pointer = sndPointer;
    SndPointer send_pointer = sndPointer;
    int n=0;
    while(first_pointer != NULL){
        if(n<k){
            n++;
        }else{
            send_pointer= send_pointer->next;
        }
        first_pointer=first_pointer->next;
    }
    std::cout << send_pointer->data;
    return 1;
}

