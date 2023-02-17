#include <stdlib.h>
#include <time.h>
#include <stdlib>
/* more headers goes there */

/**
 * print whether a random number is positive, negative or null.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive.\n",n);
	else if (n == 0)
		printf("%d is null.\n",n);
	else
		printf("%d is negative",n);
	return (0);
}
