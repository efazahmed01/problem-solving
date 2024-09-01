/*
Time Complexity: O(n) 
Space Complexity: O(1)
*/
#include<stdio.h>

int linear_search(int a[],int n,int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return i;
        }
        
    }
    
     i = -1;
     return i;
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
    
    int f;
    scanf("%d",&f);
    
    int index = linear_search(arr,n,f);
    
    if(index > 0)
    {
        printf("Found");
    }
    
    else printf("Not Found");
    
    return 0;
}

/*
without function:

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Array size: ");
    scanf("%d",&n);
    int number[n];

    for (int i = 0; i < n; i++){
        printf("number %d = ",i+1);
        scanf("%d",&number[i]);
    }

    printf("\nFinding value: ");
    int find;
    scanf("%d",&find);

    int pos = -1;
    for(int i = 0; i < n; i++){
        if(number[i] == find){
            pos = i+1;
            break;
        }
    }

    if(pos == -1){
        printf("\nNot Found!");
    }

    else printf("\nFound!\nIts position is %d",pos);


    return 0;
}
*/
