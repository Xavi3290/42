#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	totalen;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	totalen = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(totalen + 1);
	if (!str)
		return (0);
	while (i < totalen)
	{
		if (i < ft_strlen(s1))
			str[i] = s1[i];
		else
			str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
strjoin() crea una cadena formada por str1 en combinación con str2.
La cadena devuelta se asigna fuera de la memoria temporal y, por lo
tanto, sólo es válida durante la duración de la cláusula. Si no hay
suficiente espacio temporal disponible, strjoin no se ejecuta y se
genera un error.
*/
/*
int main() {
    const char *t = "Hola, mundo!";
    const char *t2 = "Hola, mundo!";


    //char *s= strjoin(t, t2);
    char *s2 = ft_strjoin(t,t2);

    if ( s2) {  // seroa ( s || s2) si strjoin funcionara
        //printf("text: %s\n", s);
        printf("text: %s\n", s2);
        //free(s); 
        free(s2);
    } else {
        printf("Error al obtener la text.\n");
    }

    return 0;
}
*/