#include <stdio.h>
/*
 *print sizes of different types of variables
 */
int main(void)
{
	int i;
	char c;
	float f;
	printf("Size of a char: %i byte(s)\n",sizeof(c));
	printf("Size of an int: %i byte(s)\n",sizeof(i));
	printf("Size of a long int: %i byte(s)\n",(long int)sizeof(i));
	printf("Size of a long long int: %i byte(s)\n",(long long int)sizeof(i));
	printf("Size of a float: %i byte(s)\n",sizeof(f));
	return (0);
}
