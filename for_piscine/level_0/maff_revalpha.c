/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

int	main(void)
{
	int	i = 1;
	char	n = 'z';

	while (n >= 'a')
	{
		if(i % 2 == 0)
		{
			n -= 32;
			write(1, &n, 1);
			n += 32;
		}
		else
			write(1, &n, 1);
		n--;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

