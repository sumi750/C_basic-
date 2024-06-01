#include<stdio.h>
int main ()
{
    int a,b;
    printf("  the value of a is : ");
    scanf("%d", &a);
    printf("the value of b is :  ");
    scanf("%d", &b);

    int nfact = 1;
    for (int i = 2; i <= a; i++)
    {
        nfact = nfact*i;
    }
    int rfact = 1;
    for (int i = 2; i <= b; i++)
    {
        rfact = rfact*i;

    }

    int nrfact = 1;
    for (int i = 2; i <= a-b; i++)
    {
        nrfact = nrfact*1;

    }

    int ncr = nfact/ (rfact*nrfact);

    printf(" the combination value is : %d", ncr);
    return 0;
}