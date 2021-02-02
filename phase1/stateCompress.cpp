//
// Created by tooyoung on 2021/2/1.
//


#include "bits/stdc++.h"
using namespace std;

int f[1 << 20][20];

// 最短hamilton路径
int hamilton(int n, int weight[20][20]) {
    memset(f, 0x3f, sizeof(f));
    f[1][0] = 0;
    for (int i = 1; i < (1 << n); ++i) {
        for (int j = 0; j < n; ++j) {
//            走过j点 todo
            if (i >> j & 1) {
                for (int k = 0; k < n; ++k) {
                    if (i >> k & 1) {
                        f[i][j] = min(f[i][j], f[i ^ (1 << j)][k] + weight[k][j]);
                    }
                }
            }
        }
    }
    return f[(1 << n) - 1][n - 1];
}

int main() {
//
    int n = 0x3f3f3f3f;
    int k = 7;
    int bitOfK = (n >> k) & 1;
    cout << bitOfK << endl;
    int lowK = n & ((1 << k) - 1);
    cout << lowK << endl;
    int xorK = n ^(1 << k);
    cout << xorK << endl;
    int assignK = n | (1 << k);
    cout << assignK << endl;
    int assignZeroK = n & (~(1 << k));
    cout << assignZeroK << endl;

    // lowbit运算
    int lowbit = n & (~n + 1);
    int lowbit2 =  n & (-n);
    cout << lowbit << " " << lowbit2;

    // 找出二进制所有是1的位
    const int MAX_N = 1 << 20;
    int H[MAX_N + 1];
    for (int i = 0; i <= 20; ++i) {
        H[1 << i] = i;
    }
    while (cin >> n) {
        while (n > 0) {
            cout << H[n & -n] << ' ';
            n -= n & -n;
        }
    }

    // x的二进制最低位的1后边有多少个0
    // x的二进制有多少位1
//    int lowbitZero = _builtin_ctz(n);
//    int bitOf1 = _builtin_popcount(n);
    cout<<
    return 0;
}