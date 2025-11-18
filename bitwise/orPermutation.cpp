//problem link : https://www.codechef.com/problems/PERMOR
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    for(int i = n; i > 0 ; i--){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int t =1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
