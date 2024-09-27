/*
During the COVID-19 pandemic, health officials are closely monitoring the spread of the virus in different regions. For several consecutive days, 
there are different ages of people affected by the coronavirus. Some people are considered at high risk if their age is a prime number, otherwise,
they are classified as low risk. Write a C program to count the number of high-risk people and low-risk people based on their ages for each day's data.

Input: First line, the input consists of a number of days.

For each day, the input starts with an integer N (1≤ N ≤10) representing the number of people affected by COVID-19.

The next line contains N space-separated integers representing the ages of the affected individuals for that day. Each age is in the range [1, 100].

Output: For each day, print two integers separated by a space: The number of high-risk people and the number of low-risk people.

Sample Input
3 
5 
21 32 37 45 53 
3
25 28 31
4
18 22 27 29

Sample Output

2 3

1 2

1 3

*/
#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        
        int n;
        scanf("%d",&n);
            
        int high = 0;
        int low = 0;
            
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d",&x);
                
            int count = 0;
            for(int j = 2; j <= sqrt(x); j++)
            {
                if(x % j == 0) 
                {
                    count = 1;
                    break;
                }    
            }
            
            if(count > 0) low++;
            else high++;
        }
            printf("%d %d\n",high,low);
    }
    
    return 0;
}
