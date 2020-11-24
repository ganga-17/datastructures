#include <stdio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("Enter Second number: ");
    scanf("%d", &n2);
     temp = n1;
      n1 = n2;   
      n2 = temp;
      printf("\nAfter swapping, firstNumber = %d\n", n1);
      printf("After swapping, secondNumber = %d", n2);

    return 0;
}