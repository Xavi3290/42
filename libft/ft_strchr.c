char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*
La función strchr en el lenguaje de programación C se utiliza para buscar
la primera aparición de un carácter específico en una cadena (string) y
devolver un puntero al primer carácter encontrado. Si el carácter no se
encuentra en la cadena, la función devuelve un puntero nulo (NULL).
*/
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n",ft_strchr("hola",'a'));
	printf("%s\n",strchr("hola",'a'));
	//printf("%s\n",ft_strchr("hola",'Z'));
	//printf("%s\n",strchr("hola",'Z'));
	printf("%s\n",ft_strchr("holaholahola",'a'));
	printf("%s\n",strchr("holaholahola",'a'));
	printf("%s\n",ft_strchr("+-  hola",'o'));
	printf("%s\n",strchr("+-  hola",'o'));
	//printf("%s\n",ft_strchr("+-  hola",'$'));
	//printf("%s\n",strchr("+-  hola",'$'));
}
*/
