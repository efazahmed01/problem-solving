/* Problem: A Pythagorean triple consists of three positive integers a, b, and c, such that a2 + b2 = c2 .

Find the number of pythagorean triples (a, b, c), such that, a + b + c = n and a >= b 

Input

A positive integer, n and 1 <= n <= 104

Output the number of triples satisfying the condition. */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    
    int ans = 0;
    for(int a = 1; a <= n; a++)
    {
        for(int b = 1; a >= b; b++)
        {
            int c = n - a - b;
            if(c < 0) break;
            if(a*a + b*b == c*c)
            {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
