int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n",ft_isprint('1'));
	printf("%d\n",ft_isprint('a'));
	printf("%d\n",ft_isprint('Z'));
	printf("%d\n",ft_isprint('$'));
}
*/