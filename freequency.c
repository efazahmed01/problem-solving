//https://judge.beecrowd.com/en/runs/code/42103600

#include <stdio.h>

int feq[1001];  // Frequency array, sized for numbers from 0 to 1000

int main()
{
    int n, m;
    
    while(1)
    {
        scanf("%d %d", &n, &m);
        
        if(n == 0 && m == 0) break;  // Exit condition when both inputs are zero
        
        int arr[m];
        
        // Reset the frequency array
        for(int i = 0; i < 1001; i++) 
        {
            feq[i] = 0;
        }
        
        // Read the input array and update the frequency array
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
            feq[arr[i]]++;
        }
        
        int c = 0;  // Counter for elements that appear more than once
        
        // Check the frequency array for duplicates
        for(int i = 0; i < 1001; i++)  // Corrected loop bounds: 0 to 1001
        {
            if(feq[i] > 1)  // If the number appears more than once
            {
                c++;
            }
        }
        
        printf("%d\n", c);  // Output the count of duplicate numbers
    }

    return 0;
}
