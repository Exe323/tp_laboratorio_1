#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

int main()
{
    char seguir='s';
    int opcion=0, posicion, dni, i, j, edad18, edad19a35, edad35, flag=0, mayor;
    EPersona persona[20], aux;



   do
    {
        printf("Bienvenido al menu de opciones\n\n");

        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                posicion=obtenerEspacioLibre(persona);

            if(posicion != -1)
                {
                    printf("Ingrese nombre y apellido: ");
                    fflush(stdin);
                    gets(persona[posicion].nombre);

                    printf("Ingrese su edad: ");
                    fflush(stdin);
                    scanf("%d", &persona[posicion].edad);

                    printf("Ingrese dni: ");
                    fflush(stdin);
                    scanf("%d", &persona[posicion].dni);

                    persona[posicion].estado=1;

                    system("pause");
                }
            else
                {
                    printf("No hay posicion disponible\n");

                    system("pause\n");
                }
                break;

            case 2:
                system("cls");

                printf("Ingrese dni: ");
                scanf("%d", &persona[posicion].dni);
                posicion=buscarPorDni(persona, dni);

                if(posicion > -1)
                {
                    persona[posicion].estado=2;
                    printf("Se ha borrado a la persona\n");

                    system("pause\n");
                }
                else
                {
                    printf("El documento no existe\n");

                    system("pause\n");
                }
                break;

            case 3:
                system("cls");
                ordenarPersonas(persona);
                system("pause\n");
                break;

            case 4:
                system("cls");
                graficodeBarras(persona, 20);
                system("pause\n");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }while(seguir=='s');

    return 0;
}



