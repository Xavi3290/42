#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	i = 0;
	p_dest = dest;
	p_src = src;
	if (!p_dest && !p_src)
		return (0);
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*
La función memcpy en C se utiliza para copiar un bloque de memoria desde
una ubicación de origen a una ubicación de destino.
*/
/*
int	main(void) {
	char *origen = "hola mundo";
	char *destino = (char *)malloc(strlen(origen) + 1);
	char *origen2 = "hola mundo";
	char *destino2 = (char *)malloc(strlen(origen2) + 1);

	size_t longitud = 11;

	if (destino && destino2) {
		memcpy(destino, origen, longitud);
		ft_memcpy(destino2, origen2, longitud);

		printf("Cadena de destino 1: %s\n", destino);
		printf("Cadena de destino 2: %s\n", destino2);

		free(destino);
		free(destino2);
	} else {
		printf("Error al asignar memoria.\n");
	}

	return (0);
}
*/