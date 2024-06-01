#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);

    if (( a%4 ==0 ) && (a%100 != 0))
    {
        /* code */ 
        printf("the %d year is leap year", a);


    }
    else{
        printf("the %d year is not leap year", a);

    }
    return 0;



}