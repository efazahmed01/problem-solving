#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    bool present[1002] = {false};
    for(int i = 0; i < n; i++)
    {
        present[array[i]] = true;
    }

    for(int i = 1; i < 1001; i++)
    {
        if(present[i] == false)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
   
}
