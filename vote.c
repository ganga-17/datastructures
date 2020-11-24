#include <stdio.h>
int main()
{
    int n1;
    printf("Enter your age: ");
    scanf("%d", &n1);
   if (n1 >= 0)
      printf("You are eligible for voting");

  else
      printf("You are not eligible for voting");

    return 0;
}