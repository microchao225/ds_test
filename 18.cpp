//
// Created by shenxc@xiaopeng.com on 2024/04/19 0019.
//
#include "ds.h"
/**
 * 暴露解
 * i一直加，直到在vector中找不到某个i，则该i是最小的正整数
 * @param vector
 * @return
 */
int find_min(std::vector<int> vector){
    int i = 1;
    int vector_size  = vector.size();
    int flag;
    while(i) {
        flag = 0;
        for(int j=0;j<vector_size;j++){
            if(vector[j] == i){
                flag = 1;
                continue;
            }
        }
        if(flag == 0){
            return i;
        }
        i++;
    }
}

int main(){
    std::vector vector = {1,5,2,6};
    std::cout << find_min(vector);
}