#include<stdio.h>
int main() {
    int m;
    printf("enter a n ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("%d", i);
        }
        
        printf("\n");
    }
    
}