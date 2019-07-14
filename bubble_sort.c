#include <stdio.h>
int * bubble_sort(int arr[], int length)
{
    int i = 0;
    int j = 0;
    printf("%d\n", length);
    for(i=0; i<length-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            j = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = j;
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
    int arr[] = {2,1,3,5,4,7,10,6,8,9};
    int length = sizeof(arr)/sizeof(int);
    int * a = bubble_sort(arr, length);
    for(int i=0; i<length; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
