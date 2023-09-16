#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	i = 0;
	p_dest = dest;
	p_src = src;
	if (!dest && !src)
		return (0);
	if (p_dest < p_src)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			p_dest[n] = p_src[n];
		}
	}
	return (dest);
}
/*
La función memmove en C se utiliza para copiar un bloque de memoria de una
ubicación de origen a una ubicación de destino, incluso si las dos ubicaciones
se superponen.
La función memmove se diferencia de memcpy en que es segura para copiar datos
incluso si las ubicaciones de origen y destino se superponen. Esto significa que
puedes utilizar memmove cuando no estás seguro de que las ubicaciones de memoria
sean completamente independientes.
*/
/*
int	main(void)
{
	char	*origen;
	char	*origen2;
	size_t	longitud;

	origen = "hola mundo";
	char *destino = (char *)malloc(strlen(origen) + 1);
		// Asigna memoria para destino
	origen2 = "hola mundo";
	char *destino2 = (char *)malloc(strlen(origen2) + 1);
		// Asigna memoria para destino2
	longitud = 11;
	if (destino && destino2) {
		// Utiliza memmove y ft_memmove para copiar los datos
		memmove(destino, origen, longitud);
		ft_memmove(destino2, origen2, longitud);
		// Imprime las cadenas de destino para verificar las copias
		printf("Cadena de destino 1: %s\n", destino);
		printf("Cadena de destino 2: %s\n", destino2);
		// Libera la memoria asignada para destino y destino2
		free(destino);
		free(destino2);
	} else {
		printf("Error al asignar memoria.\n");
	}
	return (0);
}
*/