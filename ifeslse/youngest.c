#include<stdio.h>
int main() {
    int ram, sham, gyan;;
    printf("age of ram: ");
    scanf("%d", &ram);
    printf("age of sham: ");
    scanf("%d", &sham);
    printf("age of gyan: ");
    scanf("%d", &gyan);
    if (ram < sham) // --> ram ki age sham  se kam hai
    {
        if (ram < gyan)
        printf("age of ram is %d , which is youngest", ram);
        else {
        printf("age of gyan is %d , which is youngest", gyan); }

    }
    else // --> sham ki age ram se kam hai ( ram > sham )
    {
        if (sham < gyan )
        printf("age of sham  is %d , which is youngest", sham);
        else {
        printf("age of gyan is %d , which is ypungest", gyan);}
    }
    return 0;
    }