#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
La funcion esta deprecada, se utiliza mas memset.
La función bzero se utiliza en C para establecer un bloque de memoria a cero
(es decir, rellenarlo con bytes de valor cero). Su principal uso es borrar o
inicializar una parte de la memoria.
*/
