#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
	printf("%d\n",ft_strlen("a"));
	printf("%d\n",ft_strlen("abc"));
	printf("%d\n",ft_strlen("   hola"));
	printf("%d\n",ft_strlen("$-*"));
}
*/