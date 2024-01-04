int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	printf("a = 97, %d\n",ft_tolower('a'));
	printf("Z = 90, %d\n",ft_tolower('Z'));
	printf("X = 88, %d\n",ft_tolower('X'));
	printf("$ = 36, %d\n",ft_tolower('$'));
}
*/