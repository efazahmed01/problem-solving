//problem link : https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

void solve() {
    int n,k; cin >> n >> k;
    int freq[31] = {0};
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        for(int i = 0; i < 31; i++){
            if(x&1) freq[i]++;
            x>>=1;
        }
    }
    int ans = 0;
    for(int i = 30; i >= 0; i--){
        int zero = n-freq[i];
        if(k >= zero){
            k-=zero;
            ans += 1<<i;
        }
    }
    cout << ans << endl;
}

int main(){
    int t =1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
