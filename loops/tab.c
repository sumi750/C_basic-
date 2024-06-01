#include <stdio.h>
int main() {
//   int n, i;
//   printf("Enter an integer: ");
//   scanf("%d", &n);
//   for (i = 1; i <= 10; ++i) {
//     printf("%d * %d = %d \n", n, i, i * n);
//   }
int n, i;
printf("enter a number: ");
scanf("%d", &n);
for (int i = 10; i >= 1; i--)
{
    /* code */ printf("%d * %d = %d\n", i, n, n*i);

}

  return 0;
}
