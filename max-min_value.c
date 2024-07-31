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

    printf("\nSelect :\n1.Max value\n2.Min value\n");
    int select;
    printf("Select : ");
    scanf("%d",&select);
    switch(select){

    case 1:{
        int max = number[0];
        for(int i = 1; i < n; i++){
            if(max < number[i]){
                max = number[i];
           }
        }
        printf("\nMax value is : %d",max);
        break;
    }
      
    case 2:{
        int min = number[0];
        for(int i = 1; i < n; i++){
            if(min > number[i]){
                min = number[i];
            }
        }
        printf("\nMin value is: %d",min);
        break;
    }
      
     default:
            printf("\nNB: Invalid selection. Please choose 1 for Max value or 2 for Min value.\n");
            break;
}
    return 0;
}
