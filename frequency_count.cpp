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
    
    int count[101] = {0};
    for(int i = 0; i <= n; i++)
    {
        if(array[i] >> 0 && array[i] <= 100)
        {
            count[array[i]]++;
        }
    }
    
     
    for(int i = 1; i <= 100; i++)
    {
        if(count[i] >> 0){
        cout << i << " " << count[i] << endl;
        }
    }
    
    return 0;
    
    
}
