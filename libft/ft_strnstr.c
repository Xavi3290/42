char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *) s1);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < len)
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
/*
La función strnstr se utiliza para buscar la primera aparición de una subcadena 
dentro de una cadena principal, pero con una restricción de longitud. Esto significa 
que buscará la subcadena dentro de la cadena principal, pero no buscará más allá 
de cierta longitud especificada.
*/
/*
int main() {
    const char *cadena_principal = "Hola, este es un ejemplo de prueba.";
    const char *subcadena = "ej";
    const char *cadena_principal2 = "Hola, este es un ejemplo de prueba.";
    const char *subcadena2 = "ej";
    size_t longitud = 30;

    printf("%s", ft_strnstr(cadena_principal, subcadena, longitud));
    printf("%s", strnstr(cadena_principal2, subcadena2, longitud));

    return 0;
}
*/