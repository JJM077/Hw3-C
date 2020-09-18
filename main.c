#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include<math.h>



int digit_sum(int n)
{
  if(n < 10)
  {
  return n;
  }
  else
  {
    return n % 10 + digit_sum(n/10);
  }
}


int main(void)
{
  char *input = readline("Enter an int: ");
  int n = atoi(input);
  printf("sum of digits of %d.\n", n, digit_sum(n));
}