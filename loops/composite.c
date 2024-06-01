// #include<stdio.h>
// int main() {
//     int a;
//     printf("enter a number: ");
//     scanf("%d", &a);
//     for (int i = 2; i <= a - 1; i++)
//     {
//         if (a%i == 0)
//         {
//             printf("the given number is composite\n");
//             break;

//         }
        
//     }
//     return 0;
// }
#include<stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n%i == 0)
        {
            a = 1;
            break;
        }
        }
        if (a == 0) { printf("number is prime"); }
        else { printf("number is compoatie");
        }
        
}