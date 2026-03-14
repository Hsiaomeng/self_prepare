/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i = 0;
	char	*res;
	int	len = ft_strlen(src);

	res = (char*) malloc (sizeof(char) * (len + 1));

	if(!res)
		return (NULL);
	while(src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return(res);
}
