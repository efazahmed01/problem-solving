#include<stdio.h>

long long fact(int n)
{
    if (n == 1)    //Base call
    {
        return 1;
    }

    else        //Recursion call
    {
        return n*fact(n-1);
    }
}


int main()
{
    int x;
    printf("Enter any Number = ");
    scanf("%d",&x);

    printf("Factorial = %lld",fact(x));

    return 0;

}
