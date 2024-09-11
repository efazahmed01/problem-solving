#include<stdio.h>

void selection_sort(int A[],int n)
{
    int index_min,temp;
    for(int i = 0; i < n-1; i++)
    {
        index_min = i;
        for(int j = i+1; j < n; j++)
        {
            if(A[j] < A[index_min])
            {
                index_min = j;
            }
        }
        if(index_min != i)
        {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    selection_sort(arr,n);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
