char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char) c)
            return ((char *) &s[i]);
        i++;
    }
    if (s[i] == c)
        return ((char *) &s[i]);
    return (0);
}
/*
La función strchr en el lenguaje de programación C se utiliza para buscar
la primera aparición de un carácter específico en una cadena (string) y 
devolver un puntero al primer carácter encontrado. Si el carácter no se 
encuentra en la cadena, la función devuelve un puntero nulo (NULL). 
*/
