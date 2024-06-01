#include<stdio.h>
int main () {
    int n;
    printf("enter star number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("* ");

        }
        printf("\n");
            }
    
    return 0;

}