//
// Created by tooyoung on 2021/2/15.
//


#include "bits/stdc++.h"
using namespace std;
const int n = 5;
vector<int> choosen;
void calc(int x){
    if (x == n + 1) {
        for (int i = 0; i < choosen.size(); ++i) {
            printf("%d ", choosen[i]);
        }
        puts("");
        return;
    }
    //
//    calc(x + 1);
//    choosen.push_back(x);
//    calc(x + 1);
//    choosen.pop_back();
// 选
    choosen.push_back(x);
    calc(x + 1);
    choosen.pop_back();
//    不选
    calc(x + 1);
}

int main(){
    calc(1);
}