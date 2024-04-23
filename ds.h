//
// Created by shenxc@xiaopeng.com on 2024/02/23 0023.
//

#ifndef INC_408_DS_COPY_DS_H
#define INC_408_DS_COPY_DS_H
#include "bits/stdc++.h"

#endif //INC_408_DS_COPY_DS_H

typedef struct BiNode {
    int weight;
    struct BiNode *left, *right;
}BiNode ,*BiTree;

typedef struct SingleNode {
    int data;
    struct SingleNode *next;
} SingleNode, *SndPointer;

/**
 * 创建一个单链表
 * @param data int数组
 * @return
 */
SndPointer create_linked_node(const std::vector<int> &data){
    auto head = new SingleNode();
    head->data = NULL;
    SndPointer p = head;
    for (int item : data) {
        auto cur = new SingleNode();  // 使用 new
        cur->data = item;  // 直接存储值
        cur->next = NULL;
        p->next = cur;
        p = cur;
    }
    return head;
}

/**
 * 打印一个单链表
 * @param sndPointer
 */
void print_linked_node(SndPointer sndPointer){
    SndPointer head = sndPointer;
    while(head != NULL){
        std::cout << head->data << ",";
        head = head->next;
    }
}

std::vector<int> convert_to_vector(SndPointer sndPointer){
    std::vector<int> result;
    SndPointer head = sndPointer;
    while(head!=NULL){
        result.push_back(head->data);
        head = head->next;
    }
    return result;
}

int search_k_snd(SndPointer sndPointer,int k);
int search_k_snd2(SndPointer sndPointer,int k);
int* move_p(int nums[],int p,int n);
int* find_min_distance_bf(int s1[],int s1_length,int s2[],int s2_length,int s3[],int s3_length);
//int abs(int n);
int get_d(int a,int b,int c);
bool is_min(int a,int b,int c);
int find_min_d(int a[],int a_length,int b[],int b_length,int c[],int c_length);
bool is_min_triple(int a, int b, int c);
int find_min_distance(int A[], int B[], int C[], int lena, int lenb, int lenc) ;
SndPointer create_single_node1(int* data[], int n);
int find_k_bf(SndPointer sndPointer,int k);
int two_pointer_find_k(SndPointer sndPointer,int k);
/**
 * 获取正整数
 * @param n
 * @return
 */
int get_pos_integer(int n);