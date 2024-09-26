#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        
        multiset<int> m;
        m.insert(a);
        m.insert(b);
        m.insert(c);
        
        for(int i = 0; i < 5; i++)
        {
            auto it = m.begin();
            int low = *it;
            m.erase(it);
            m.insert(low+1);
        }
        
        long long ans = 1;
        for(int it : m)
        {
            ans*=it;
        }
        
        cout << ans << endl;
    }
}
