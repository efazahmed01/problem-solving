/*
In this problem, you will be given a vector containing n elements initially. 

You will be given q queries. Each query can be of 3 types. 

- Type 1: push an element v at the back of the vector.

- Type 2: Erase an element from position i. It is guaranteed that position i exists. Also, i will be 0 <= i < vector.size().

- Type 3: You will be given a certain position pos, where 0 <= pos < vector.size(), you have to calculate, how many i are there such that v[i] > v[pos].

Input

The first line of input will contain an integer n, where n <= 103

The next line will contain n integers. The initial elements of the vector.

Now it will contain an integer q, which means the amount of the query, where q <= 103

The next q lines will contain 2 integer in each line, The first one is type of the query which was mentioned above. 

The second one will be the index or value according to the mentioned procedure above. 

Output

For each type 3 query output a single integer, the number of inversion for the index given in input.

Example

Input

5    

1 2 3 4 5

3

1 6

2 2

3 0

Output

4
*/

#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int q; cin >> q;
    
    while(q--)
    {
        int tp,val;
        cin >> tp >> val;
        
        if(tp == 1)
        {
            v.push_back(val);
        }
        else if(tp == 2)
        {
            v.erase(v.begin()+val);
        }
        else if(tp == 3)
        {
            int count = 0;

            for(int i = 0; i < v.size(); i++)
            {
                
                if(v[i] > v[val])
                {
                    count++;
                }
            }
            cout << count << endl;

        }
        
    }
    
    
}
