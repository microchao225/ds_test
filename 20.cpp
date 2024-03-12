//
// Created by shenxc@xiaopeng.com on 2024/03/4 0004.
//
#include "ds.h";
#include "stdlib.h"
#include <iostream>

//int main(){
//    int s1[] = {-1,0,9};
//    int s2[] = {-25,-10,10,11};
//    int s3[] = {2,9,17,30,41};
//    std::cout<<find_min_d(s1,3,s2,4,s3,5);
//}

/**
 * 暴力解
 * 复盘：
 * 1. 第一次没做对，没想清楚，最终求的是整体结果，分开求肯定不对。
 * @param s1
 * @param s1_length
 * @param s2
 * @param s2_length
 * @param s3
 * @param s3_length
 * @return
 */
int* find_min_distance_bf(int s1[],int s1_length,int s2[],int s2_length,int s3[],int s3_length){
    int result[3];
    int temp_d = INT_MAX;
    for(int i=0;i<s1_length;i++){
        int a = s1[i];
        for(int j=0;j<s2_length;j++){
            int b = s2[j];
            for(int k=0;k<s3_length;k++){
                int c = s3[k];
                int d = get_d(a,b,c);
                if(d < temp_d) {
                    temp_d = d;
                    result[0] = a;
                    result[1] = b;
                    result[2] = c;
                }
            }
        }
    }
    return result;
}

int find_min_d(int a[],int a_length,int b[],int b_length,int c[],int c_length){
    int result = INT_MAX;
    int i,j,k;
    while(i<a_length && j<b_length && k<c_length){
        int d = abs(a[i]-b[j]) + abs(b[j]-c[k]) + abs(c[k]-a[i]);
        if(d < result){
            result = d;
        }
        if(is_min(a[i],b[j],c[k])){
            i++;
        }else if(is_min(b[j],a[i],c[k])) {
            j++;
        }else{
            k++;
        }
    }
//    return result;
}

bool is_min(int a,int b,int c){
    if(a < b && a < c){
        return true;
    }
    return false;
}


int get_d(int a,int b,int c){
    int d = abs(a-b) + abs(b-c) + abs(c-a);
    return d;
}