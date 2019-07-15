#include <stdio.h>
int * bubble_sort(int arr[], int length)
{
    int i = 0, j=0;
    int temp = 0;
    printf("%d\n", length);
    for(i=0; i<length-1; i++)
    {
        for(j=0; j<length - i; j++)
        if(arr[j] > arr[j+1])
        {
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    for(i=0; i<length; i++)
    {
        printf("%d\n", arr[i]);
    }
    return arr;
}
int main()
{
    int arr[] = {2,2,8,1,3,5,4,7,6,9};
    int length = sizeof(arr)/sizeof(int);
    int * a = bubble_sort(arr, length);
    int i=0;

    return 0;
}
