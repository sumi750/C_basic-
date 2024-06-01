#include<stdio.h>
int main() { 
    int n;
    printf("eneter a number: ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
     n = n/10;
     count++;

    }
    printf("number of digit in %d ", count);
    return 0;

    }