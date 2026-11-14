#include <stdio.h>
// factorial using recursion
int fact2(int n)
{
 if (n == 1)
 return 1; // base case
 else
 return (n * fact2(n - 1)); // recursive call
}
int main(void)
{
 int m = 6, factorial;
 factorial = fact2(m);
 printf("\nfactorial of %d is %d.", m, factorial);
 return 0;
}