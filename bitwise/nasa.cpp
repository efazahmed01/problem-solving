
//problem link : https://www.codechef.com/problems/PALIXOR
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'

vector<ll> palin;

void precompute(){
    int mx = 1 << 15;
    for(ll i = 0; i < mx; i++){
        string init = to_string(i);
        string rev = init;
        reverse(all(rev));
        if(init == rev){
            palin.push_back(i);
        }
    }
    // cout << palin.size() << endl;
    // for(auto x : palin){
    //     cout << x << " ";
    // }
}

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    unordered_map<ll,ll> freq;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        freq[v[i]]++;
    }
    ll cnt = 0;
    for(auto a : v){
        for(auto p : palin){
            cnt+=freq[a^p];
        }
        freq[a]--;
    }
    cout << cnt << endl;
}

int main(){
    fast_io;
    precompute();
    int t =1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
