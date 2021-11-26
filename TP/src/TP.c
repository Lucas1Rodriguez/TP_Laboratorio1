/*
 ============================================================================
 Name        : TP.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(void) {
	setbuf(stdout,NULL);

		float resultadoSuma;
		float resultadoResta;
		float resultadoMultiplicacion;
		float resultadoDivision;
		float factoriales;
		float factoriales2;
		float num1;
		float num2;
		float resultadoFactorial1;
		float resultadoFactorial2;
		float respuestaSuma;
		float respuestaResta;
		float respuestaMultiplicacion;
		float respuestaDivision;
		int opcion;
		int flagCuentas = 0;
		int flag = 0;
		do {
			printf ("1)Ingresar numero 1\n");
			printf ("2)Ingresar numero 2\n");
			printf ("3)Calcular todo\n");
			printf ("4)Mostrar cuentas\n");
			printf ("5)Fin de la funcion\n");
			scanf ("%d", &opcion);
			switch (opcion){
			case 1:
				printf("Num1:\n");
				scanf("%f",&num1);
				printf("\nNumero ingresado correctamente\n");
				flag++;
				break;
			case 2:
				printf("Num2:\n");
				scanf("%f",&num2);
				printf("\nNumero ingresado correctamente\n");
				flag++;
				break;
			case 3:
				if(flag >= 2)
				{
					respuestaSuma = suma(&resultadoSuma,  num1,  num2);
					respuestaResta = resta(&resultadoResta,num1,  num2);
					respuestaMultiplicacion = multiplicacion(&resultadoMultiplicacion, num1, num2);
					respuestaDivision = dividir(&resultadoDivision,num1, num2);
					resultadoFactorial1 = factorial(num1, &factoriales);
					resultadoFactorial2 = factorial(num2,&factoriales2);
					printf("Calculos hechos\n");
					flagCuentas = 1;
				}
				else
				{
					printf("Error. Falta agregar un numero\n");
				}
				break;
			case 4:
				if(flag >= 2)
				{
					if(flagCuentas == 1)
					{
						if (respuestaSuma == 0)
						{
							printf("El resultado de A+B es: %f\n",resultadoSuma);
						}
						if (respuestaResta == 0)
						{
							printf("El resultado de A-B es: %f\n",resultadoResta);
						}
						if (respuestaMultiplicacion == 0)
						{
							printf("El resultado de A*B es: %f\n",resultadoMultiplicacion);
						}
						if (respuestaDivision == 0)
						{
							printf("El resultado de A/B es: %f\n",resultadoDivision);
						}
						else
						{
							printf("No es posible dividir por cero\n");
						}
						if (resultadoFactorial1 == 0){
							printf("El factorial del numero es: %f\n",factoriales);
						}
						else
						{
							printf("No se puede hacer el factorial de un numero negativo\n");
						}
						if (resultadoFactorial2 == 0)
						{
							printf("El factorial del numero es: %f\n",factoriales2);
						}
						else
						{
							printf("No se puede hacer el factorial de un numero negativo\n");
						}
					}
					else
					{
						printf("No estan hechos los calculos\n");
					}
				}
				else
				{
					printf("Error. Falta agregar un numero\n");
				}
				break;
			case 5:
				printf("Fin de la funcion");
				break;
			}
		}while (opcion < 5);

	return EXIT_SUCCESS;
}
