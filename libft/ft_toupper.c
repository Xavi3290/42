int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	printf("a = 97, %d\n",ft_toupper('a'));
	printf("z = 122, %d\n",ft_toupper('z'));
	printf("X = 88, %d\n",ft_toupper('X'));
	printf("$ = 36, %d\n",ft_toupper('$'));
}
*/