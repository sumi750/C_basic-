#include<stdio.h>
int main() { 
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a<0)
    {
        /* code */
        a = a*(-1);
        printf("the absolute value is : %d", a);

    }
    else {
        printf("the vale is : %d", a);
    }

    return 0;
}