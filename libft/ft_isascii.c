int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n",ft_isascii('1'));
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii('Z'));
	printf("%d\n",ft_isascii('$'));
}
*/
