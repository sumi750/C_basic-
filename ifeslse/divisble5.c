#include<stdio.h>
int main()
{
    int a; 
    printf("enter a number: ");
    scanf("%d", &a);

    if (a%5 == 0)
    {
        /* code */
        printf("%d is divisvle by 5", a);

    }
    else
    { printf("%d is divisble by 5", a);
    
    }
    return 0;

}