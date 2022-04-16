
/*
 * Funciones.h
 *
 *  Created on: 9 abr. 2022
 *      Author: ANTHAR ASSKOUL
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include "funcioncargaforzada.h"

/// @fn float PedirNumero(char*)
/// @brief En esta funcion pedimos un puntero por char luego se ingresa un numero que se guarda en la direccion de numeroIngresado
/// @param char* mensaje
/// @return Se retorna el numero ingresado
float PedirNumero(char* mensaje);
/// @fn float CalculoCostoDebito(float)
/// @brief En esta funcion se hace el calculo de costos en debito, que seria hacer el descuento de 10%
/// @param float precio
/// @return El precio final con debito
float CalculoCostoDebito(float precio);
/// @fn float CalculoCostoCredito(float)
/// @brief En esta funcion se hace el calculo de costos en credito, que seria hacer un aumento del 25%
/// @param float precio
/// @return El precio final con credito
float CalculoCostoCredito(float precio);
/// @fn float CalculoCostoBitcoin(float)
/// @brief En esta funcion se hace el calculo de costo en bitcoin, que seria (1BTC -> 4606954.55 Pesos)
/// @param float precio
/// @return El precio final con bitcoin
float CalculoCostoBitcoin(float precio);
/// @fn float MostrarPrecioPorKm(float, float)
/// @brief En esta funcion se hace el calculo de costo por km, es decir que se hace el precio unitario. (costo/km)
/// @param float precio
/// @param float km
/// @return El precio unitario. (precio/km)
float MostrarPrecioPorKm(float precio, float km);
/// @fn float DiferenciaDePrecio(float, float)
/// @brief En esta funcion se hace la diferencia de precio latam con precio aerolinea o viceversa
/// @param float precioLatam
/// @param float precioAerolinea
/// @return la diferencia de precioLatam con precioAerolinea o viceversa
float DiferenciaDePrecio(float precioLatam, float precioAerolinea);
/// @fn void CargaForzada(void)
/// @brief En esta funcion se hace la carga forzada con datos harcodeados
void CargaForzada(void);


#endif /* FUNCIONES_H_ */
