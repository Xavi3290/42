int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('Z'));
	printf("%d\n",ft_isalnum('$'));
}
*/