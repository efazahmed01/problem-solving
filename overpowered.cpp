//https://toph.co/p/overpowered

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int sum = 0;
    vector<int> v;
    while(k--)
    {
        int temp;
        string s; cin >> s;
        int p;
        if(s == "GOTO") 
        {
            cin >> p;
            v.push_back(p);
            sum+=arr[p-1];
        }
        else
        {
            v.pop_back();
            sum+=arr[v[v.size()-1]-1];
        }
        
    }
	
	cout << sum << endl;
	return 0;
}
