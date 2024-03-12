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
SndPointer create_single_node1(int data[], int n);
