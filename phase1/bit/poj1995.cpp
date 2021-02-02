//
// Created by tooyoung on 2021/2/1.
//


#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

int power(int a, int b, int p){
    int ans = 1 % p;
    while (b) {
        if (b & 1) {
            ans = (long long) ans * a % p;
        }
        a = (long long) a * a % p;
        b >>= 1;
    }
    return ans;
}

ll mul(ll a, ll b, ll p){
    ll ans = 0;
    while (b) {
        if (b & 1) {
            ans = (ans + a) % p;
        }
        a = a * 2 % p;
        b >>= 1;
    }
    return ans;

}
int main(){
    cout << power(3, 7, 5) << endl;
    cout << power(2, 3, 5) << endl;
    return 0;
}