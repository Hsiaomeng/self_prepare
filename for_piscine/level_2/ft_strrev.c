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
		j++;
	j--;
	while(i < j)
	{
		tmp = str[i];//先把str[i]存起来
		str[i] = str[j];//把右边的值放到左边
		str[j] = tmp;//把保存的原左边值放到右边
		i++;
		j--;
	}
	return (str);
}
