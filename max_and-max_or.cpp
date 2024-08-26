#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int max_and = 0;
    int max_or = 0;

    for(int i = 0; i < n; i++)
    {
        max_or|=arr[i];
        if(arr[i] > max_and)
        {
            max_and = arr[i];
        }
    }
    
    cout << max_and << " " << max_or << endl;
    
    return 0;
}
