#include <bits/stdc++.h>
using namespace std;
//define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'


void precompute(){
    return;
}

int decimalToAnyBase(int n, int b){
    string ans = "";
    while(n){
        int rem = n % b;
        ans+=to_string(rem);
        n/=b;
    }
    reverse(all(ans));
    int a = stoi(ans);
    return a;
}


void solve() {
    cout << "Decimal to any base converter\n";
    cout << "Enter Decimal : " ;
    int n; cin >> n;
    cout << "Enter base : ";
    int b; cin >> b;
    int ans = decimalToAnyBase(n,b);
    cout << "Decimal to " << b << " base : " << ans << endl;
}

int main(){
  //  fast_io;
    precompute();
    int t =1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
