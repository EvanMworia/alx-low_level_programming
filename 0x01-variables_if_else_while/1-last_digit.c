#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst_no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_no = n % 10;
	if (lst_no > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_no);
	else if (lst_no == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_no);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_no);
			return (0);
}
