#include<stdio.h>

void bubblesort(int *array)
{
    int index;
    for (index =0 ; index < 4 ;index++)
    {
        for (int jindex = index + 1; jindex < 5 -index -1  ;jindex++)
        {
            if (array[index] > array[jindex])
            {
                int temp = array[index];
                array[index] = array[jindex];
                array[jindex] = temp;
            }
        }
    }
    
    for (index = 0; index <5; index++)
    {
        printf(" %d  ",array[index]);
    }
}
int main()
{
    int a[]={5,2,1,4,3};
    bubblesort(a);
    return 0;
}