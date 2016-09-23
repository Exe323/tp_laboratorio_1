#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

/**
 *Obtiene el indice de los nombres ordenados.
 * @param lista el array se pasa como parametro.
 * @return ordena a las personas alfabeticamente.
 */
void ordenarPersonas(EPersona []);

/**
 *Obtiene el indice de las edades en forma oredenada.
 * @param lista el array se pasa como parametro.
 * @param entero tamaño del array.
 * @return el grafico en forma de barra.
 */
void graficodeBarras(EPersona [], int);

#endif // FUNCIONES_H_INCLUDED
