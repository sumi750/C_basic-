#include<stdio.h>
int main(){
    // c code for swaping given value with 3rd variable.
    // int n,m, temp;
    // printf("enter n");
    // scanf("%d", &n);
    // printf("enter m");
    // scanf("%d", &m);
    // temp = n;
    // n = m;
    // m = temp;
    // printf("the value of n is %d\n", n);
    // printf("the value of m is %d", m);
    // return 0;

        // c code for swaping given value without using 3rd variable.
    int a,b;
    printf(" enter a ");
    scanf("%d", &a);
    printf(" enter b ");
    scanf("%d", &b);

    a = a+b;
    b = a -b;
    a = a -b;

    printf("swap value of a is %d\n", a );
    printf("swap value of b is %d", b);
    return 0;



}



// #include <stdio.h>
// void change(int *num)
// {
//     printf("before adding x = %d\n", *num);
    
//     (*num) += 100;
//     printf("after adding x = %d\n", *num);
// }
// int main()
// {
//     int x = 1000;
//     printf("before changing x = %d\n", x);
//     change(&x);
//     printf("after function call value of x = %d", x);
    
//     return 0;
    
// }