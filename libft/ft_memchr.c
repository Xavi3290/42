void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    size_t  i;

    p = s;
    i = 0;
    while (i < n)
    {
        if (p[i] == (unsigned char) c)
            return ((void *) &p[i]);
        i++;
    }
    return (0);
}
/*
La función memchr en C se utiliza para buscar la primera aparición de un 
valor específico en un bloque de memoria.
*/
