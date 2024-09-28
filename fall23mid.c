/*
You are given an array of N integers. Your task is to find the minimum difference and maximumdifference 
between all pairs of elements in the array. Then, find the sum of the minimum and maximum differences.

Input:
The first line contains an integer N, the size of the array.
The second line contains N space-separated integers representing the elements of the array.
Output:
The first line should print the minimum difference between any two elements.
The second line should print the maximum difference between any two elements.
The third line should print the sum of the minimum and maximum differences.

Sample Input:
4
15 2 7 4

Sample Output: 
2
13
15

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    int mx_dif = abs(arr[1] - arr[0]);
    int min_dif = abs(arr[1] - arr[0]);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                int dif = abs(arr[i] - arr[j]);
                if(dif > mx_dif) mx_dif = dif;
                if(dif < min_dif) min_dif = dif;
            }
        }
    }
    
    printf("%d\n%d\n%d\n",min_dif,mx_dif,min_dif+mx_dif);
}
