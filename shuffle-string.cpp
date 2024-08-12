#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    string s;
    cin >> s;
    
    int n = s.size();
    
    string newstr(n, '.');
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        newstr[array[i]-1] = s[i];
        
    }
    
    cout << newstr << endl;
    
    return 0;
    
}
