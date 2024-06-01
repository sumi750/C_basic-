#include<stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    int lastDigt = 0;
    while (n != 0)
    {
        lastDigt = n % 10;
        sum = sum + lastDigt;
        n = n/10;
    }
    
    printf("sum of the difgit %d", sum);
}