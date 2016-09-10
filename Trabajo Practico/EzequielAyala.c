float calcularSuma(float numero1, float numero2)
{
    float resultado;
    resultado=numero1+numero2;

    return resultado;
}

float calcularResta(float numero1, float numero2)
{
    float resultado;
    resultado=numero1-numero2;

    return resultado;
}

float calcularDivision(float numero1, float numero2)
{
    float resultado;
    if(numero2==0)
    {
        resultado=printf("\nNo se puede dividir por 0\n");
        return resultado;
    }
    resultado=numero1/numero2;

    return resultado;
}

float calcularMultiplicacion(float numero1, float numero2)
{
    float resultado;
    resultado=numero1*numero2;

    return resultado;
}

float calcularFactorial(float numero)
{
    if(numero==1)
    {
        return 1;
    }

    return numero*(numero-1);
}
