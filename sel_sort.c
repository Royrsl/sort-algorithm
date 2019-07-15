#include <stdio.h>
void sel_sort(int arr[], int length)
{
    int tmp;
    int flag = 0;
    int i = 0, j =0;
    for(i=0;i<length-1;i++)
    {
        flag = i;
        for(j = i+1;j<length;j++)
        {
            if(arr[flag] > arr[j])
            {
                flag = j;
            }
        }
        tmp = arr[flag];
        arr[flag] = arr[i];
        arr[i] =tmp;
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
    sel_sort(arr, length);
    return 0;
}
