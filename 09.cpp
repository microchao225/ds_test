//
// Created by shenxc@xiaopeng.com on 2024/02/27 0027.
//
#include "ds.h"
#include "bits/stdc++.h"
int main(){
    std::vector<int> data = {1,2,3,4,5,6,7};
    SndPointer sndPointer = create_linked_node(data);
    print_linked_node(sndPointer);
}

