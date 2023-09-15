void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    size_t  i;

    p = s;
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char) c;
        i++;
    }
    return (s);    
}
/*
La función memset se utiliza en C para llenar un bloque de memoria con un valor específico.
Es especialmente útil para inicializar arrays y estructuras de datos con un valor 
predefinido o para borrar áreas de memoria asignada. Por ejemplo, puedes usar memset para 
llenar un array con ceros o para establecer ciertas partes de una estructura en un valor 
específico antes de utilizarla. 
*/
