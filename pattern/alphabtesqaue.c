#include<stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    // alpabet sqaure
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int  j = 1; j <= n; j++)
        {
            int d = a + 64;
            int ch = (char) d; // type conversation

            printf("%c ", d);
            a++;

        }
        printf("\n");
    }
    return 0;
    }