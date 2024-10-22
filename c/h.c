#include <stdio.h>
#include <stdlib.h>
int* rotateLeft(int d, int arr_count, int* arr, int* result_count) 
{
    int index=0;
    d = d % arr_count;
    printf("%d",d);
    int *a = (int *)malloc( d * sizeof(int));
    
    for( index=0; index< d; index++)
    {
        a[index] = arr[index];

    }


    for (index = 0; d + index <arr_count;index++)
    {
        result_count[index]= arr[d + index];
    }
    for(int jindex = 0; index <arr_count ;jindex++ ,index++)
    {
        result_count[index]= a[jindex];
              
    }
    return result_count;
}
int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d",rotateLeft(9,5,a,0));
    return 0;
}