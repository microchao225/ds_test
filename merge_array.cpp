//
// Created by shenxc@xiaopeng.com on 2024/03/21 0021.
//
#include <vector>
#include <iostream>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i=0,j=0;
    std::vector<int> result;
    while(i < m || j < n){
        if(i == m) {
            result.push_back(nums2[j++]);
        }
        if(j == n) {
            result.push_back(nums1[i++]);
        }
        if(nums1[i] <= nums2[j]){
            result.push_back(nums1[i++]);
        }else{
            result.push_back(nums2[j++]);
        }
    }
    nums1 = result;
}

int removeElement(std::vector<int>& nums, int val) {

}

//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    int p1 = 0, p2 = 0;
//    int sorted[m + n];
//    int cur;
//    while (p1 < m || p2 < n) {
//        if (p1 == m) {
//            cur = nums2[p2++];
//        } else if (p2 == n) {
//            cur = nums1[p1++];
//        } else if (nums1[p1] < nums2[p2]) {
//            cur = nums1[p1++];
//        } else {
//            cur = nums2[p2++];
//        }
//        sorted[p1 + p2 - 1] = cur;
//    }
//    for (int i = 0; i != m + n; ++i) {
//        nums1[i] = sorted[i];
//    }
//}

//int main(){
//    std::vector v1 = {1,2,3,0,0,0};
//    std::vector v2 = {2,5,6};
//    merge(v1,3,v2,3);
//    for(int& num : v1){
//        std:: cout << num << ",";
//    }
//}