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
