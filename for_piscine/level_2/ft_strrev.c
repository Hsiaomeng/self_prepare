/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

char	*ft_strrev(char *str)
{
	int	i = 0;
	int	j;
	char	tmp;

	if(!str)
		return (NULL);
	j = 0;
	while(str[j])
		i++;
	j--;
	while(i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
