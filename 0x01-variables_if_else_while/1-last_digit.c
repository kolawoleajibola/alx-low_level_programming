#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -> assign a random number to the variable
*
* Return: always return 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (n > 5)
{
printf("Last digit of %d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("Last digit of %d and is 0\n", n);
}
else 
{
printf("Last digit of %d and is less than 6 and not 0\n", n);
}
printf("\n");
return (0);
}
