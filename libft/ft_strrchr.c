char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *last;

    i = 0;
    last = '\0';
    while (s[i] != '\0')
    {
        if (s[i] == (char) c)
            last = (char *) &s[i];
        i++;
    }
    return (last);
}