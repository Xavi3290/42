#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
strlcpy es una función que se utiliza comúnmente en sistemas operativos tipo Unix
y es parte de la biblioteca de C estándar en algunas implementaciones. Su función
principal es copiar una cadena desde una ubicación de origen a una ubicación de
destino, asegurándose de que no se exceda un límite específico de longitud en el
destino. A diferencia de strcpy,
	que no verifica límites y puede provocar desbordamientos
de búfer, strlcpy garantiza que el búfer de destino no se desborde.
*/
/*
int	main(void) {
	char *origen = "hola mundo";
	char *destino; // Asigna memoria para destino
	char *origen2 = "hola mundo";
	char *destino2; // Asigna memoria para destino2

	size_t longitud = 7;
		// Ajusta la longitud a 11 para incluir el carácter nulo

	printf("%d", strlcpy(destino, origen, longitud));
	printf("%d", ft_strlcpy(destino2, origen2, longitud));
	// Imprime las cadenas de destino para verificar las copias
	printf("Cadena de destino 1: %s\n", destino);
	printf("Cadena de destino 2: %s\n", destino2);

	return (0);
}
*/