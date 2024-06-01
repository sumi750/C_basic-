#include <stdio.h>
int minarray( int arr[], int  size)
{
    int min = arr[0];
    int i = 0;
    for(int i = 0; i<size; i++)
    
    if (min >arr[i])
    {
        min = arr[i];
    }
    return min;
    
}

int main ()

{
    int i = 0;
    int min = 0;
    int number[] = {49,8,45,65,78,14,100};
    
    min = minarray( number , 7);
    
    printf("minimun number is %d\n", min);
    return 0;
    
}