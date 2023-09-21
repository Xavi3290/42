#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (0);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}
/*
La función strdup se utiliza para duplicar una cadena de
caracteres en una nueva área de memoria asignada dinámicamente.
*/
/*
int	main(void) {
	const char *o = "Hola, mundo!";
	char *d = ft_strdup(o);
	const char *o2 = "Hola, mundo!";
	char *d2 = strdup(o2);

	if (d || d2) {
		printf("Original: %s\n", o);
		printf("Duplicada: %s\n", d);
		printf("Original: %s\n", o2);
		printf("Duplicada: %s\n", d2);

		free(d);
	} else {
		printf("Error al duplicar la cadena.\n");
	}

	return (0);
}
*/