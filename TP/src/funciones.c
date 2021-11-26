/*
 * funciones.c
 *
 *  Created on: 24 nov. 2021
 *      Author: USURIO
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
*\ brief Funcion para sumar
*\ param Pido primer numero, pido segundo numero
*\ return Retorno el resultado de la suma
*/
int suma(float* pResultado, int operando1, int operando2){
// param Pun
	int resultado;
	int retorno = -1;

	if(pResultado != NULL){
		resultado = operando1 + operando2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;
}
/**
*\ brief Funcion para restar
*\ param Pido primer numero, pido segundo numero
*\ return Retorno el resultado de la resta
*/
int resta(float* pResultado, int operando1, int operando2){
	int resultado;
	int retorno = -1;

	if(pResultado != NULL){
		resultado = operando1 - operando2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;
}
/**
*\ brief Funcion para multiplicar
*\ param Pido primer numero, pido segundo numero
*\ return Retorno el resultado de la multiplicacion
*/
int multiplicacion(float* pResultado, int operando1, int operando2){
	int resultado;
	int retorno = -1;

	if(pResultado != NULL){
		resultado = operando1 * operando2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;
}
/**
*\ brief Funcion para dividir
*\ param Pido primer numero, pido segundo numero
*\ return Retorno bandera
*/
int dividir(float* pResultado, int operando1, int operando2){
	int resultado;
	int retorno = -1;

	if(pResultado != NULL && operando2 !=0){
		resultado = operando1 / operando2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;
}
/**
*\ brief Funcion para factorial
*\ param Pido primer numero, pido segundo numero
*\ return Retorno bandera
*/
int factorial(float operador, float *pFactorial)
{
	float factorial = 1;
	int retorno=-1;
	if(operador>0)
	{
	for(int i=1; i<=operador; i++)
	{
		factorial = factorial*i;
	}
		retorno=0;
		*pFactorial=factorial;
	}
	return retorno;
}
