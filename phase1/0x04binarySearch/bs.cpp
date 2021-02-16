//
// Created by tooyoung on 2021/2/15.
//


#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[5] = {1, 3, 5, 10};
    int l = 0, r = 4;
    int x = 4;
    // 查找》=x的后继元素
    while (l < r) {
        int mid = l + r >> 1;
        if (arr[mid] >= x) {
            r = mid;
        }else{
            l = mid + 1;
        }
    }

}