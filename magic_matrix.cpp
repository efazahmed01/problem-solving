#include<bits/stdc++.h>
using namespace std; 
    
int main(){
    int n;
    cin >> n;
    
    int array[n][n];
    
    for(int r = 0; r < n; r++)
    {
        for(int c = 0; c < n; c++)
        {
            cin >> array[r][c];
        }
    }
    
    int sum = 0;
    for(int c = 0; c < n; c++)
    {
        sum += array[0][c];
    }
    
    for(int r = 0; r < n; r++)
    {
        int row_sum = 0;
        for(int c = 0; c < n; c++)
        {
            row_sum += array[r][c];
        }
        if(sum != row_sum)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    for(int c = 0; c < n; c++)
    {
        int column_sum = 0;
        for(int r = 0; r < n; r++)
        {
            column_sum += array[r][c];
        }
        if(sum != column_sum)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    int digP_sum = 0;
    for(int r = 0; r < n; r++)
    {
        digP_sum += array[r][r];
    }
    if(sum != digP_sum)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    int digS_sum = 0;
    for(int r = 0; r < n; r++)
    {
        digS_sum += array[r][n-r-1];
    }
    if(sum != digS_sum)
    {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
}
