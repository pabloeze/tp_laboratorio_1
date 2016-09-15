#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int leerOperando(void)
{
    int operando;
    scanf("%d",&operando);
    return operando;
}

/** \brief operación de suma
 *
 * \param dos números en int
 * \return suma
 *
 */
int adicion(int suma1, int suma2)
{
    int suma;
    suma=suma1+suma2;
    return suma;
}

/** \brief operación de resta
 *
 * \param dos números en int
 * \return resultado
 *
 */
int resta(int minuendo, int sustraendo)
{
    int resultado;
    resultado = minuendo - sustraendo;
    return resultado;
}

/** \brief operación de multiplicacion
 *
 * \param dos factores en int
 * \return multiplicacion
 *
 */
int multiplicar(int factor1, int factor2)
{
    int multiplicacion;
    multiplicacion=factor1*factor2;
    return multiplicacion;
}

/** \brief operación de divicion
 *
 * \param dos números en int
 * \return divicion
 *
 */
int dividir(int dividendo, int divisor)
{
    int division;
    if (divisor==0)
    {
        printf("el divisor debe de ser distinto de cero\n");
        printf("no es posible realizar esta operacion");
        return 0;
    }
    else
    {
        division=dividendo/divisor;
        return division;
    }

}

/** \brief operación para calcular factorial
 *
 * \param un operando en int
 * \return 0 por que se imprime dentro de la funcion
 *
 */
int factorial(int operando)
{
    int factor, contador=1;
    int resultadofactorial=1;
    factor = operando;
    if(factor==0)return 1;
    if(factor>0)
    {
        for (contador=1;contador<=operando;contador++)
        {
            resultadofactorial=resultadofactorial*factor;
        }
        return resultadofactorial;
    }
    else
    {
        printf("el resutaldo no es posible, para un factorial el operando debe de ser >= cero");
        return 0;

    }


}
