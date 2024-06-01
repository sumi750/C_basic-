#include<stdio.h>
int main() { 
    int ram, sham, gyan;
    printf("age of ram: ");
    scanf("%d", &ram);
    printf("age of sham: ");
    scanf("%d", &sham);
    printf("age of gyan: ");
    scanf("%d", &gyan);
    if (ram>sham)
    {   if (ram > gyan)
        printf(" age of ram is %d , which is gratest", ram);
        else
        printf(" age of gyan is  %d , which  is greatest", gyan);
    }
    else // ram ke age sham se kam hai
    { 
        if (sham > gyan)
        printf("age of sham is %d , which  is greatest", sham);
        else
        printf(" age of gyan is %d , which  is greatest", gyan);
        }
    return 0;
}