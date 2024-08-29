#include <stdio.h>

int binary(int arr[], int n, int i) {
    int left = 0;
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == i)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < i)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 6, 7, 8, 9, 29, 45, 66, 87};
    int s = 7;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binary(arr, n, s);

    if (result != -1)
    {
        printf("%d found at index %d\n", s, result);
    }
    else
    {
        printf("%d not found in the array\n", s);
    }

    return 0;
}
