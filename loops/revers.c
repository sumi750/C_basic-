#include<stdio.h>
int main() {
    int n, sum ;
    printf("enter a number: ");
    scanf("%d", &n);
    int r = 0;
    int lastDigit = 0;
    while (n != 0)

    {
        lastDigit = n%10;
        
        r = r*10 + lastDigit;
        n = n/10;
        

        }

    printf("revers of the number %d\n", r);

    return 0;
}