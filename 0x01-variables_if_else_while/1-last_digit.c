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
	if (n % 10 > 5 && n % 10 != 0)



return (0);
}
