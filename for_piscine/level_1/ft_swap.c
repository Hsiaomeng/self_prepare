/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
*/

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;//保存*a，i是未初始化的垃圾值
	*a = *b;
	*b = i;//*a和*b现在一样，*a原来的值丢失了
}
