#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    string s;
    cin >> s;
    
    int n = s.size();
    
    for(int i = 0; i < n; )
    {
        int j;
        for(j = i; j < n; j++)
        {
            if(s[j] != s[i]) break;
            
        }
        int len = j - i;
        
        cout << s[i] << len;
        
        i = j;
    }

    return 0;
    
}
