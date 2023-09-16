#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	i = 0;
	p_s1 = s1;
	p_s2 = s2;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
/*
La función memcmp en C se utiliza para comparar dos bloques 
de memoria y determinar si son iguales o cuál es el mayor o 
menor en caso de que sean diferentes.
*/