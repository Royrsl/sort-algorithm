#include <stdio.h>
void insert_sort(int arr[], int length)
{
    int i = 0, j = 0, tmp = 0;
    for(i=1; i<length; i++)
    {
       for(j=i; j>0; j--)
       {
           if(arr[j-1]>arr[j])
           {
               tmp = arr[j-1];
               arr[j-1] = arr[j];
               arr[j] = tmp;
           }
       }
    }
    for(i=0; i<length; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[] = {10,2,8,1,3,5,4,7,6,9};
    int length = sizeof(arr)/sizeof(int);
    insert_sort(arr, length);

    return 0;
}