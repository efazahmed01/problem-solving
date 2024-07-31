#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int n1 = 2;
    int n2 = 1;
    int lucas;

    printf("Lucas series is : ");
    printf("%d, %d, ",n1,n2);
    for (int i = 3; i <= n; i++){
            lucas = n1 + n2;
            n1 = n2;
            n2 = lucas;
            printf("%d, ",lucas);
    }
    return 0;
}


<------------Alternative-------------->

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int number[n];

    number[0] = 2;
    number[1] = 1;

    printf("%d, %d, ",number[0],number[1]);
    for(int i = 2; i < n; i++)
    {
        number[i] = number[i-1]+number[i-2];
        printf("%d, ",number[i]);

    }
    return 0;

}
  
    
