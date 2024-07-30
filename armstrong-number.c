#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Armstrong Numbers Are: ");
    int count = 0;

    //check all number:
    for (int i = 1; i <= n; i++){
        int temp = i;
        int rem;
        int sum = 0;
        while(temp != 0){
           rem = temp % 10;
           sum+=rem*rem*rem;
           temp/=10;
        }
        if(i == sum){
            printf("%d ",i);
            count++;
        }

    }
    printf("\nTotal Armstrong number is %d",count);
    return 0;
}
