#include <stdio.h>

int arr[10000];

int main()
{
    int length;
    scanf("%d",&length);
    
    for(int i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int index,val;
    
    scanf("%d %d",&index, &val);
    
    length++;
    
    for(int i = length - 1; i >= index; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[index] = val;
    
    for(int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
