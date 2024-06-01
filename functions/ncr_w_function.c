#include<stdio.h>
int factorial ( int x )
{
int fact = 1;
for (int i = 2; i <= x; i++)

    fact = fact*i;


return fact;


}
int main()
{
    int n, m;
    printf("enter n :");
    scanf("%d", &n);
    printf(" enter m: ");
    scanf("%d", &m);

    int ncr = factorial ( n )/ (factorial(m) * factorial(n-m));
    printf("%d", ncr);
    return 0;

}