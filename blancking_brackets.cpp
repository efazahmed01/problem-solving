/*---------------------------------------------------------------------------------------------------------------
You will be given a bracket sequence, basically a string S consisting of only characters '(' or ')'.

You need to calculate the minimum number of additional bracket characters have to be added to make the string balanced. 

A balanced bracket sequence is a string consisting of only brackets, such that this sequence, when inserted certain numbers and mathematical operations, gives a valid mathematical expression.

Input

The only line of input consists of a string S which contains only '(' or ')'.

 1 <= |S| <= 105

Output

The only line of output contains the minimum insertion needed to make the string balanced. 

Example

Input

(()))(((

Output

4

*/-----------------------------------------------------------------------------------------------------


#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    string s;
    cin >> s;
    
    int ans = 0;
    stack<char> stk;
    for(char c : s)
    {
        if(c == '(') stk.push(c);
        else
        {
            if(stk.empty()) ans++;
            else stk.pop();
            
        }
    }
    ans+=stk.size();
    
    cout << ans << endl;

    return 0;
    
}
