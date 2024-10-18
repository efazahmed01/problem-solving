/*
Initially you have a list containing a single number 1. You have to do q queries on this list.

In each query you will be given a number x and you have to chose an integer from you current list and multiply with x and add the result to the list. 

Remember you don't need to erase the chosen ones. After doing q queries what is the maximum sum of the list numbers? 

Input

The first line of input contains a single number q. The next q lines contain an integer x. 

  1 <= q <= 10 

  

  -10 <= x <= 10

Output

 Print one line containing the maximum sum of the list after q operations. 

Example

Input

3

1 2 3

Output

10
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    
    int n;
    cin >> n;
    
    multiset<int> list;
    list.insert(1);
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x >=0)
        {
            auto it = list.end();
            it--;
            int val = *it;
            list.insert(val * x);
        }
        
        else
        {
            auto it = list.begin();
            int val = *it;
            list.insert(val * x);
        }
    }
    
    for(auto it : list)
    {
        sum+=it;
    }
    
    cout << sum << endl;
}
