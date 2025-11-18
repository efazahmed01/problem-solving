//problem link : https://codeforces.com/problemset/problem/1994/B
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s,t;
    cin >> s >> t;
    bool z = false;
    bool o = false;

    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            if(s[i] == '0'){
                if(!o) {
                    cout << "NO\n";
                    return;
                }
           }

        }
        if(s[i] == '0') z = true;
        else o = true;
    }
    cout << "YES\n";
}

int main(){
    int t =1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
