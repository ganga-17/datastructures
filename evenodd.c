#include <stdio.h>
int main()
{
    int n1;
    printf("Enter a number: ");
    scanf("%d", &n1);
   if (n1 % 2 == 0)
      printf("%d is even\n", n1);

   if (n1 % 2 != 0 )
      printf("%d is odd\n", n1);

    return 0;
}