#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - determines whether n is positive/ negative or zero
  *Return: 0(passed)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("positive");
	else if (n == 0)
		printf("zero");
	else
		printf("positive");
	return (0);
}

