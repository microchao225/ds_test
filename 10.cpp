//
// Created by shenxc@xiaopeng.com on 2024/02/29 0029.
//
#include <iostream>
void move_p(int nums[],int result[],int p,int n){
    int temp_cnt1=0;
    for(int i = p; i < n; i++) {
        result[temp_cnt1] = nums[i];
        temp_cnt1++;
    }
    for(int i=0;i<p;i++){
        result[temp_cnt1] = nums[i];
        temp_cnt1++;
    }
}
//int main(){
//    int nums[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int result[10];
//    move_p(nums,result,2,10);
//    for (const auto &item: result){
//        std::cout<< item;
//    }
//}