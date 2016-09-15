#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** \brief Función que permite realizar cálculos básicos y el factorial de un número dado
 *
 * \param No se ingresan parametros
 * \return No se devuelven parametros
 *
 */
int main()
{
    int operando1=0, operando2=0; //inicialiso para que no lea basura
    int resultado;
    int flag=1;
    int resultadoFactorial;
    int opcion=10;
    while(flag==1)
    {
        do
        {

            printf("1- Ingresar 1er operando (A = %d)\n", operando1);
            printf("2- Ingresar 2do operando (B = %d)\n", operando2);
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n");
            scanf("%d",&opcion);
        }while(opcion<1||opcion>9);

        switch(opcion)
        {
           case 1:
                printf("Ingrese el primer operando: ");
                scanf("%d", &operando1);
                break;
            case 2:
                printf("Ingrese el segundo operando: ");
                scanf("%d", &operando2);
                break;
            case 3:
                resultado=adicion(operando1,operando2);
                printf("la suma es: %d\n",resultado);
                break;
            case 4:
                printf("la resta es: %d\n",resta(operando1,operando2));
                break;
            case 5:
                printf("la division es: %d\n",dividir(operando1,operando2));
                break;
            case 6:
                printf("la multiplicacion es: %d\n",multiplicar(operando1,operando2));
                break;
            case 7:
                printf("el resultado de el factorial del primer operando es: %d\n",factorial(operando1));
                printf("el resultado de el factorial del segundo operando es: %d\n",factorial(operando2));
                break;
            case 8:
                printf("la suma es: %d",adicion(operando1,operando2));
                printf("la resta es: %d",resta(operando1,operando2));
                printf("la division es: %d",dividir(operando1,operando2));
                printf("la multiplicacion es: %d",multiplicar(operando1,operando2));
                printf("el resultado de el factorial del primer operando es: %d\n",factorial(operando1));
                printf("el resultado de el factorial del segundo operando es: %d\n",factorial(operando2));
                break;
            case 9:
                flag=0;
                break;
        }
    }
return 0;
}

