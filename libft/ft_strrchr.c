char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = '\0';
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (last);
}
/*
La función strrchr en el lenguaje de programación C se utiliza para buscar
la ultima aparición de un carácter específico en una cadena (string) y
devolver un puntero al ultimo carácter encontrado. Si el carácter no se
encuentra en la cadena, la función devuelve un puntero nulo (NULL).
*/
