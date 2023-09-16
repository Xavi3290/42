#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	total;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	total = size - dest_len - 1;
	while (src[i] != '\0' && i < total)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*
strlcat es una función que se utiliza comúnmente en sistemas tipo Unix y es
parte de la biblioteca C estándar en algunas implementaciones, como BSD. Su
función principal es concatenar una cadena fuente a una cadena destino,
asegurándose de que no se exceda un límite específico de longitud en la cadena
destino. A diferencia de strcat, que no verifica límites y puede provocar
desbordamientos de búfer,
	strlcat garantiza que el búfer de destino no se desborde.
*/
/*
int main()
{
    char origen[] = "hola mundo";
    char destino[] = "ADEU"; // Reservar espacio para destino
    char origen2[] = "hola mundo";
    char destino2[] = "ADEU"; // Reservar espacio para destino2

    printf("%d\n", ft_strlcat(destino, origen, 11));
    printf("%s\n", destino);
    printf("%d\n", strlcat(destino2, origen2, 11));
    printf("%s\n", destino2);

    return 0;
}   
*/