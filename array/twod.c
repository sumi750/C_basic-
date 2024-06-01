#include<stdio.h>
int main ()
{
    
    int arr[4][3] = {{ 4 , 5 , 5 }, { 7 , 8 , 9 }, { 7 , 6 , 1}, {9 , 5 , 2}};
    printf("two D array ");
    printf("\n");

    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", arr[i] [j]);
            
        }
        printf("\n");

        
    }
    return 0;
}