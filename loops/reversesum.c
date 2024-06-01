#include<stdio.h>
int main() {
    int n; 
    printf("enter a number :" );
    scanf("%d", &n);
    int sum, r= 0, lastdigit = 0;
    while (n != 0)
    {
        /* code */
        lastdigit = n%10;
        r = r*10 + lastdigit;
        
        n = n/10;

    }
    sum = n+r;
    printf("sum is %d", sum);
    

}