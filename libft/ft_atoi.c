int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
La función atoi (que significa "ASCII to Integer") es una
función de la biblioteca estándar de C que convierte una
cadena de caracteres que representa un número entero en una
representación numérica de tipo int. Esta función es útil
cuando necesitas tomar un valor numérico de una cadena de
entrada, como un número ingresado por el usuario en forma
de texto.
*/
/*
int main(void)
{
    printf("%d\n", ft_atoi("  -0546:n5"));
    printf("%d\n", atoi("  -0546:n5"));

    return 0;
}   
*/