#include<stdio.h>
int main() {
    int n, i;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", i, n, i*n);
        }
        return 0;
    }