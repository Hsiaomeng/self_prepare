/*
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

#include <unistd.h>

int	main(void)
{
	char	n = 'a';
	int	i = 1;
	
	while(n <= 'z')
	{
		if (i % 2 == 0)
		{
			n -= 32;
			write(1, &n, 1);
			n += 32;
		}
		else
			write(1, &n, 1);
		i++;
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
