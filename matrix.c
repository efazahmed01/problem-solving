#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int number[n1][n2];

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            printf("number[%d][%d] = ",i,j);
            scanf("%d",&number[i][j]);

        }
    }


    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            printf("%d ", number[i][j]);

        }
        printf("\n");
    }
    return 0;

}
