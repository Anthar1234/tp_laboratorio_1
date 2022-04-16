/*
 * Funciones.C
 *
 *  Created on: 9 abr. 2022
 *      Author: ANTHAR ASSKOUL
 */
#include <stdio.h>
#include <stdlib.h>

float PedirNumero(char* mensaje)
{

	float numeroIngresado;
	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);
	while(numeroIngresado<0)
	{
		printf("Error, %s", mensaje);
		scanf("%f", &numeroIngresado);
	}
	return numeroIngresado;
}
float CalculoCostoDebito(float precio)
{
	float resultado;
	resultado = precio - (precio *0.10);
	return resultado;
}
float CalculoCostoCredito(float precio)
{
	float resultado;
	resultado = precio + (precio *0.25);
	return resultado;
}
float CalculoCostoBitcoin(float precio)
{
	float bitcoin = 4606954.55;
	float resultado;
	resultado=(precio / bitcoin);
	return resultado;
}
float MostrarPrecioPorKm(float precio, float km)
{
	float resultado;
	resultado= precio/km;
	return resultado;
}
float DiferenciaDePrecio(float precioLatam, float precioAerolinea)
{
	float resultado;
	if(precioLatam>precioAerolinea)
	{
		resultado= precioLatam-precioAerolinea;
	}else{
		resultado = precioAerolinea - precioLatam;
	}
	return resultado;
}

