#include<stdio.h>
int main () {
    int m, n;
    printf("enter m: ");
    scanf("%d", &m);
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <=  m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);

        }
        
        printf("\n");

    }
    
}