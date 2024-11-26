//https://toph.co/p/programmer-s-meetup

#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    string s; cin >> s;
	int n; cin >> n;
	string s1; cin >> s1;
	int n1; cin >> n1;
	string s2; cin >> s2;
	int n2; cin >> n2;
	string s3; cin >> s3;
	int n3; cin >> n3;
	string s4; cin >> s4;
	int n4; cin >> n4;

	int t;
	cin >> t;
	int sum = 0;
	while(t--)
		{
			string h;
			cin >> h;
			if(h == s) sum+=n;
			else if(h == s1) sum+=n1;
			else if(h == s2) sum+=n2;
			else if(h == s3) sum+=n3;
			else if(h == s4) sum+=n4;
		}
	cout << "XXL " << sum/90 << endl;
	sum%=90;
    cout << "XL " << sum/30 << endl;
    sum%=30;
    cout << "L " << sum/10 << endl;
	
	return 0;
}
