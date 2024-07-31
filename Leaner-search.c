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
