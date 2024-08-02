#include<stdio.h>

void maximum(int x[])
{
    int max = 0;
    for(int i = 0; i < 7; i++)
    {
        if(max < x[i])
        {
            max = x[i];
        }

    }
    printf("Max value = %d\n",max);
}

void minimum(int x[])
{
    int min = x[0];
    for(int i = 1; i < 7; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }
    printf("Min valu = %d",min);

}

int main()
{
    int array[] = {10,50,5,70,10000,45,2};
    maximum(array);
    minimum(array);

}
