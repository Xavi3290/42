#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
    if (ft_strlen(s) - start < len)
    {
        len = ft_strlen(s) - start;
    }   
    subs = malloc(len + 1);
    if (!subs)
		return (0);   
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
/*
La función substr (abreviatura de "substring") generalmente se usa
para extraer una porción de una cadena (string) más grande.
*/
/*
int main() {
    const char *texto = "Hola, mundo!";
    int inicio = 5;
    int longitud = 5;

    //char *s= substr(texto, inicio, longitud);
    char *s2 = ft_substr(texto, inicio, longitud);

    if (s && s2) {
        printf("Subcadena: %s\n", s);
        printf("Subcadena: %s\n", s2);
        free(s); 
        free(s2);
    } else {
        printf("Error al obtener la subcadena.\n");
    }

    return 0;
}
*/