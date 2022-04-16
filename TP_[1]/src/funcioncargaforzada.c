/*
 * funcionCargaForzada.c
 *
 *  Created on: 16 abr. 2022
 *      Author: ANTHAR ASSKOUL
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void CargaForzada(void)
{
	float kilometrosCF=7090;
	float precioAerolineasCF=162965;
	float precioLatamCF=159339;
	float debitoAerolineasCF;
	float debitoLatamCF;
	float creditoAerolineasCF;
	float creditoLatamCF;
	float bitcoinAerolineasCF;
	float bitcoinLatamCF;
	float precioUnitarioAerolineasCF;
	float precioUnitarioLatamCF;
	float diferenciaPrecioCF;


	debitoAerolineasCF=CalculoCostoDebito(precioAerolineasCF);
	creditoAerolineasCF=CalculoCostoCredito(precioAerolineasCF);
	debitoLatamCF=CalculoCostoDebito(precioLatamCF);
	creditoLatamCF=CalculoCostoCredito(precioLatamCF);
	bitcoinAerolineasCF=CalculoCostoBitcoin(precioAerolineasCF);
	bitcoinLatamCF=CalculoCostoBitcoin(precioLatamCF);
	precioUnitarioAerolineasCF=MostrarPrecioPorKm(precioAerolineasCF, kilometrosCF);
	precioUnitarioLatamCF=MostrarPrecioPorKm(precioLatamCF, kilometrosCF);
	diferenciaPrecioCF=DiferenciaDePrecio(precioAerolineasCF, precioLatamCF);

	 printf("Kms: Ingresado:%.2f"
			 "\n\nPrecio Aerolíneas: $ %.2f"
			 "\na) Precio con tarjeta de débito: $ %.2f"
			 "\nb) Precio con tarjeta de crédito $ %.2f"
			 "\nc) Precio pagando con bitcoin: %.6f BTC"
			 "\nd) Precio unitario: %.2f", kilometrosCF, precioAerolineasCF, debitoAerolineasCF, creditoAerolineasCF, bitcoinAerolineasCF, precioUnitarioAerolineasCF);

	 printf("\n\nPrecio Latam: $ %.2f"
			 "\na) Precio con tarjeta de débito: $ %.2f"
			 "\nb) Precio con tarjeta de crédito: $ %.2f"
			 "\nc) Precio pagando con bitcoin: %.6f BTC"
			 "\nd) Precio unitario: %.2f", precioLatamCF, debitoLatamCF, creditoLatamCF, bitcoinLatamCF, precioUnitarioLatamCF);
	 printf("\n\n La diferencia de precio es: $ %.2f", diferenciaPrecioCF);

}

