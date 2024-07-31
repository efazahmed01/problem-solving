#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);


    int n1 = 0;
    int n2 = 1;
    int fibbo;

    printf("Fibbonacci series is : ");
    printf("%d, %d, ",n1,n2);
    for (int i = 2; i < n; i++){
            fibbo = n1 + n2;
            n1 = n2;
            n2 = fibbo;
            printf("%d, ",fibbo);
    }
    return 0;
}
