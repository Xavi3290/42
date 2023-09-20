#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(size * nmemb);
	if (memory == 0)
		return (0);
	ft_bzero(memory, (size * nmemb));
	return (memory);
}
/*
La función calloc es una función de la biblioteca estándar de C
que se utiliza para asignar memoria dinámicamente para un bloque
de datos y la inicializa a cero. Es especialmente útil cuando
necesitas trabajar con arreglos o estructuras de datos en tiempo
de ejecución y deseas asegurarte de que todos los elementos estén
inicializados en cero.
*/
/*

*/