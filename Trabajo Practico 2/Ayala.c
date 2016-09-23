#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>


int obtenerEspacioLibre(EPersona lista[])
{
    int i;
    for(i=0;i<20;i++)
    {
        if(lista[i].estado==0)
            return i;
    }
    return -1;
}

int buscarPorDni(EPersona lista[], int dni)
{
    int i;

        for(i=0;i<20;i++)
            {
                if(lista[i].dni);
                return i;
            }
            return -1;
}

void ordenarPersonas(EPersona lista[])
{
    int i, j, z;
    EPersona aux;

    for(i=0;i<19;i++)
    {
        for(j=i+1;j<20;j++)
        {
           if(strcmp(lista[i].nombre, lista[j].nombre>0));
           {
               aux=lista[i];
               lista[i]=lista[j];
               lista[j]=aux;
           }
        }
    }
    system("cls");
    printf("Nombre  Edad  DNI\n");

    for(z=0;z<20;z++)
    {
        if(lista[i].estado==1);
        printf("%s   %d  %d\n", lista[z].nombre, lista[z].edad, lista[z].dni);
    }
}

void graficodeBarras(EPersona lista[], int tam)
{
    int i, edad18, edad19a35, edad35, flag=0, mayor;

    edad18=edad19a35=edad35=0;
    for(i=0;i<20;i++)
    {
        if(lista[i].estado == 1 && lista[i].edad < 19){
            edad18++;}
        if(lista[i].estado == 1 && lista[i].edad > 18 && lista[i].edad < 36){
            edad19a35++;}
        if(lista[i].estado == 1 && lista[i].edad > 35){
            edad35++;}
    }

    if(edad19a35<=edad18 && edad35<=edad18)
    {
        mayor=edad18;
    }
    else
    {
        if(edad19a35>=edad18 && edad35<=edad19a35)
    {
        mayor=edad19a35;
    }
        else
        {
            mayor=edad35;
        }
    }
    for(i=mayor;i>0;i--)
    {
        if(mayor=edad18)
        {
            printf("*");
        }
        else
        {
            if(mayor=edad19a35)
            {
                flag=1;
                printf("\t*");
            }
            else
            {
                flag==0;
                printf("\t\t*");
                flag==1;
                printf("\t\t*");
            }
        }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", edad18, edad19a35, edad35);
    }
}

