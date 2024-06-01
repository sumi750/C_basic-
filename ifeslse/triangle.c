#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a value of a, b, c :");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c && (b + c) > a &&  (a + c) > b )
    {
        
        printf("%d %d %d is  vaild traangle", a,b,c);

    }
    else{ printf(" %d %d %d is invalid triangle", a,b,c);
    }
    return 0;

}