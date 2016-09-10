#include <stdio.h>
#include <stdlib.h>
#include "EzequielAyala.h"



int main()
{
    char seguir = 's';
    int opcion = 0;
    float x=0, y=0, sumar, restar, dividir, multiplicar, factorizar;

    system("cls");

    do
    {

        printf("\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป");
		printf("\n         บ               :: C A L C U L A D O R A ::                 บ");
		printf("\n          อออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ");



        printf("\n                 1. Ingresar 1er operando (A=%2.2f)",x);
        printf("\n                 2. Ingresar 2do operando (B=%2.2f)",y);
        printf("\n                 3. Calcular la suma (A+B)");
        printf("\n                 4. Calcular la resta (A-B)");
        printf("\n                 5. Calcular la division (A/B)");
        printf("\n                 6. Calcular la multiplicacion (A*B)");
        printf("\n                 7. Calcular el factorial (A!)");
        printf("\n                 8. Calcular todas las operaciones");
        printf("\n                 9. Salir\n");

        printf("\n");

        scanf("%d",&opcion);
        fflush(stdin);



        switch(opcion)
        {
            case 1:
                printf("\n1. Ingrese 1er operando (A=%.2f): ",x);
                scanf("%f", &x);
                system("\npause\n");
                break;

            case 2:
                printf("\n2. Ingresar 2do operando (B=%.2f): ",y);
                scanf("%f", &y);
                system("\npause\n");
                break;

            case 3:
                sumar=calcularSuma(x, y);
                printf("\nLa suma es: %f\n", sumar);
                system("\npause\n");
                break;

            case 4:
                restar=calcularResta(x, y);
                printf("\nLa resta es: %f\n", restar);
                system("\npause\n");
                break;

            case 5:
                dividir=calcularDivision(x, y);
                if(y!=0)
                {
                    printf("\nLa division es: %f\n", dividir);
                }

                system("\npause\n");
                break;

            case 6:
                multiplicar=calcularMultiplicacion(x, y);
                printf("\nLa multiplicacion es: %f\n", multiplicar);
                system("\npause\n");
                break;

            case 7:
                factorizar=calcularFactorial(x);
                printf("\nEl factorial es: %f\n", factorizar);
                system("\npause\n");
                break;

            case 8:
                sumar=calcularSuma(x, y);
                printf("\nLa suma es: %f\n", sumar);

                restar=calcularResta(x, y);
                printf("\nLa resta es: %f\n", restar);

                dividir=calcularDivision(x, y);
                if(y!=0)
                {
                    printf("\nLa division es: %f\n", dividir);
                }

                multiplicar=calcularMultiplicacion(x, y);
                printf("\nLa multiplicacion es: %f\n", multiplicar);

                 factorizar=calcularFactorial(x);
                printf("\nEl factorial es: %f\n", factorizar);

                system("\npause\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }


    }while(seguir=='s');
    return 0;
}



