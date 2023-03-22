#include "main.h"

/**
 * print_alphabet_x10: Prints alphabet 10 times
 * in new lines everytime
 */
void print_alphabet_x10(void)
{
	int i = 1, alpha;

	do {
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
				_putchar('\n');
	} while (i <= 10);
}
