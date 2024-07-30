#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;

    printf("Strong Numbers Are : ");
    //check all number:
    for (int i = 1; i <= n; i++){
            int sum = 0;
            int temp = i;
            while(temp != 0){
                int rem = temp % 10;
                int fact = 1;
                for(int j = 1; j <= rem; j++){
                    fact*=j;
                }
                sum+=fact;
                temp/=10;
            }
            if (sum == i){
                printf("%d ",i);
                count++;
    }

    }
    printf("\nTotal Strong Number = %d",count);
    return 0;
}
