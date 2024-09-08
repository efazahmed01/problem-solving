/*
Write an algorithm to read a value A and a value N. Print the sum of N numbers from A (inclusive). While N is negative or ZERO, a new N (only N) must be read. All input values are in the same line.

Input
The input contains only integer values, can be positive or negative.

Output
The output contains only an integer value.

Input	
3 2     
Output
7

Intput
3 -1 0 -2 2
Output
7
-------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
    int a,n;
    
    scanf("%d",&a);
    
    efaz:
        scanf("%d",&n);
        if(n <= 0) goto efaz;
    
    int sum = 0;    
    for(int i = 0; i < n; i++)
    {
        sum+=a;
        a++;
    }
    
    printf("%d\n",sum);
    
    return 0;
    
}
