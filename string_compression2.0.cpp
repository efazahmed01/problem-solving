#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    int n = s.size();
    
    sort(s.begin(),s.end());
    
    for(int i = 0; i < n;)
    {
        int j= i;
        for(;j < n; j++)
        {
            if(s[j] != s[i]) break;
        }
        int len = j - i;
        cout << s[i] << len;
        i = j;
    }
}
