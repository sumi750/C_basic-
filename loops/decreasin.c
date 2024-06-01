#include<stdio.h>
int main() {
    int n;
    printf("enetr a number: ");
    scanf("%d", &n);
    int a = 100;
    for (int i = 1; a>0; i++)
    {
        /* code */
        printf("%d\n", a);
        a = a - 3;
        }
    return 0;
}