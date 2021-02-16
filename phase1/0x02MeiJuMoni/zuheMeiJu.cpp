//
// Created by tooyoung on 2021/2/15.
//


#include "bits/stdc++.h"

using namespace std;
const int n = 5;
vector<int> choosen;

void calc(int x, int m) {
    if (choosen.size() > m || choosen.size() + n - x + 1 < m) return;
    if (x == n + 1) {
        for (int i = 0; i < choosen.size(); ++i) {
            printf("%d ", choosen[i]);
        }
        puts("");
        return;
    }
// 选
    choosen.push_back(x);
    calc(x + 1,m);
    choosen.pop_back();
//    不选
    calc(x + 1, m);
}

int main() {
    int m = 3;
    calc(1, 3);
}