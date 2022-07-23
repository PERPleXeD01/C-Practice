//Write a function to find sum of digits of a number.
#include <stdio.h>
int add_digits(int);
int main()
{
  int n, result;
  printf("Enter the number: ");
  scanf("%d", &n);
  result = add_digits(n);
  printf("%d\n", result);
  return 0;
}
int add_digits(int n) {
  if (n == 0)  // Base case
    return 0;

  return (n%10 + add_digits(n/10));
}