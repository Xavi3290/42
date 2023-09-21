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
int main() {
    size_t nmemb = 5;
    size_t size = sizeof(int);
    size_t nmemb2 = 5;
    size_t size2 = sizeof(int);

    int *array = (int *)calloc(nmemb, size);
    int *array2 = (int *)ft_calloc(nmemb2, size2);

    if (array == NULL || array2 == NULL) {
        printf("La asignación de memoria falló.\n");
        return 1;
    }

    for (size_t i = 0; i < nmemb; i++) {
        printf("array[%zu] = %d\n", i, array[i]);
    }
    for (size_t i = 0; i < nmemb2; i++) {
        printf("array2[%zu] = %d\n", i, array2[i]);
    }

    free(array); // No olvides liberar la memoria al final
    free(array2);

    return 0;
}
*/