#include<stdio.h>
int main() {
    int n, m;
    printf("number of rows: ");
    scanf("%d", &n);
    printf("number of column: ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n"); // har line ke baad enter
    }
    }