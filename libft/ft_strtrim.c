#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]))
		len--;
	str = ft_substr(s1, i, len - i);
	return (str);
}
/*
La función ft_strtrim elimina los caracteres especificados en set
del principio y el final de la cadena s1 y devuelve una nueva cadena
que representa la versión recortada de s1. Maneja punteros nulos y
utiliza funciones auxiliares como ft_strchr y ft_substr para realizar
el recorte.
*/
/*
int	main(void)
{
	const char	*cO;
	const char	*cE;
	char		*nC;
	char		*nC2;

	cO = "   ¡Hola, mundo!   ";
	printf("Cadena original: \"%s\"\n", cO);
	cE = " ";
	nC = ft_strtrim(cO, cE);
	nC2 = strtrim(cO, cE);
	if (nC && nc2) {
		printf("Cadena recortada: \"%s\"\n", nC);
		printf("Cadena recortada: \"%s\"\n", nC2);
		free(nC);
		free(nC2);
	} else {
		printf("No se pudo asignar memoria para la cadena recortada.\n");
	}
	return (0);
}
*/