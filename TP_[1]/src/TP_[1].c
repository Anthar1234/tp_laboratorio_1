/*
 ============================================================================
 Name        : Tp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "funcioncargaforzada.h"

int main(void) {
	setbuf(stdout, NULL);
	printf("Bienvenidos. Ingresar un numero y asi selecciona la opcion");

	     float kilometros;
	     float precioLatam;
	     float precioAerolineas;
	     int banderaKm = 0;
	     int banderaLatam = 0;
	     int banderaAero = 0;
	     int opcionMenu;
	     int opcionCase2;
	     float tarjetaDebitoLatam;
	     float tarjetaCreditoLatam;
	     float bitcoinLatam;
	     float precioPorKmLatam;
	     float diferenciaDePrecio;
	     float tarjetaDebitoAero;
	     float tarjetaCreditoAero;
	     float bitcoinAero;
	     float precioPorKmAero;


	     do
	     {
	    	 if(banderaKm==0 && banderaLatam==0 && banderaAero==0)
	    	 {
	    		 printf("\n1. Ingresar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
					        "\nPrecio vuelo Aerolíneas: %.2f"
		  			         "\nPrecio vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 }
	    	 if(banderaKm==1 && banderaLatam==0 && banderaAero==0)
	    	 {
	    		 printf("\n1. Cambiar Kilómetros: %.2f"
						"\n2. Ingresar Precio de Vuelos: "
		  			        "\nPrecio vuelo Aerolíneas: %.2f"
	    				 	 "\nPrecio vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 }
	    	 if(banderaKm==1 && banderaLatam== 1 && banderaAero==0)
	    	 {
	    		 printf("\n1. Cambiar Kilómetros: %.2f"
	    				 "\n2. Ingresar Precio de Vuelos: "
		 			        "\nPrecio vuelo Aerolíneas: %.2f"
		 			         "\nCambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 }
	    	 if(banderaKm==1 && banderaLatam== 1 && banderaAero==1)
	    	 	    	 {
				 printf("\n1. Cambiar Kilómetros: %.2f"
						 "\n2. Ingresar Precio de Vuelos: "
		 			        "\nCambiar vuelo Aerolíneas: %.2f"
		  			         "\nCambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 	    	 }
	    	 if(banderaKm==1 && banderaLatam== 0 && banderaAero==1)
	    	 	    	 {
				 printf("\n1. Cambiar Kilómetros: %.2f"
						 "\n2. Ingresar Precio de Vuelos: "
		  			        "\nCambiar vuelo Aerolíneas: %.2f"
		 			         "\nIngresar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
	    	 	    	 }
	    	 if(banderaKm==0 && banderaLatam==1 && banderaAero==1)
						 {
				 printf("\n1. Ingresar Kilómetros: %.2f"
						 "\n2. Ingresar Precio de Vuelos: "
		  			        "\nCambiar vuelo Aerolíneas: %.2f"
		  			        "\nCambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
						 }
	    	 if(banderaKm==0 && banderaLatam==1 && banderaAero==0)
						 {
				 printf("\n1. Ingresar Kilómetros: %.2f"
						 "\n2. Ingresar Precio de Vuelos: "
		  			        "\nIngresar vuelo Aerolíneas: %.2f"
		  			         "\nCambiar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
						 }
	    	 if(banderaKm==0 && banderaLatam== 0 && banderaAero==1)
						 {
				 printf("\n1. Ingresar Kilómetros: %.2f"
						 "\n2. Ingresar Precio de Vuelos: "
		 			        "\nCambiar vuelo Aerolíneas: %.2f"
		  			        "\nIngresar vuelo Latam: %.2f"
						"\n3. Calcular todos los costos:"
						"\n4. Informar Resultados"
						"\n5. Carga forzada de datos"
						"\n6. Salir\n", kilometros, precioAerolineas, precioLatam);
						 }

	    	 scanf("%d", &opcionMenu);
	    	 if(opcionMenu>0 && opcionMenu<7)
	    	 {
	    		 switch(opcionMenu)
	    			    	 {
	    			    	 case 1:
	    			    		 kilometros=PedirNumero("Ingrese los kilometros: ");
	    			    		 banderaKm=1;
	    			    		break;
	    			    	 case 2:
	    			    		 do
	    			    		 {
	    			    			 printf("1- Para aerolineas"
											 "\n2- Para Latam "
											 "\n3- Volver al menu"
											 "\nIngrese una opcion: \n");
									 scanf("%d", &opcionCase2);
									 if(opcionCase2==1||opcionCase2==2 || opcionCase2==3)
									 {
										 switch(opcionCase2)
										 {
										 case 1:
											 precioAerolineas=PedirNumero("Ingrese el precio de Aerolineas: ");
											 banderaAero=1;
											 break;
										 case 2:
											 precioLatam = PedirNumero("Ingrese el precio de Latam: ");
											 banderaLatam=1;
											 break;
										 case 3:
											 opcionCase2=3;
											 break;
										 }

									 }
									 else
									 {
										 printf("Error, Ingresar la opcion valida\n");
									 }
	    			    		 }while(opcionCase2!=3);
	    			    		 break;
	    			    	 case 3:
	    			    		 if(banderaKm==0 || banderaLatam==0 || banderaAero==0)
								 {
									 printf("\nOpcion invalida por falta de datos\n"
											 "Ingrese datos\n");
									 break;
								 }
	    			    		 tarjetaDebitoLatam = CalculoCostoDebito(precioLatam);
	    			    		 tarjetaCreditoLatam = CalculoCostoCredito(precioLatam);
	    			    		 bitcoinLatam = CalculoCostoBitcoin(precioLatam);
	    			    		 precioPorKmLatam = MostrarPrecioPorKm(precioLatam, kilometros);
	    			    		 diferenciaDePrecio = DiferenciaDePrecio(precioLatam, precioAerolineas);
	    			    		 tarjetaDebitoAero = CalculoCostoDebito(precioAerolineas);
	    			    		 tarjetaCreditoAero = CalculoCostoCredito(precioAerolineas);
	    			    		 bitcoinAero = CalculoCostoBitcoin(precioAerolineas);
	    			    		 precioPorKmAero = MostrarPrecioPorKm(precioAerolineas, kilometros);
	    			    		 	 printf("\n\nSE INGRESO TODOS LOS DATOS \n\n");

	    			    		 break;
	    			    	 case 4:
	    			    		 if(banderaKm==0 || banderaLatam==0 || banderaAero==0)
	    			    		 {
	    			    			 printf("\nOpcion invalida por falta de datos\n"
	    			    					 "Ingrese datos\n");
	    			    			 break;
	    			    		 }
	    						 printf("Kms Ingresados: %.2f Km"
	    								 "\nLatam: %.2f"
	    								 "\na) Precio con tarjeta de débito: $ %.2f"
	    								 "\nb) Precio con tarjeta de crédito: $ %.2f"
	    								 "\nc) Precio pagando con bitcoin: %.6f BTC"
	    								 "\nd) Precio unitario: $ %.2f", kilometros, precioLatam, tarjetaDebitoLatam,tarjetaCreditoLatam,bitcoinLatam, precioPorKmLatam);
	    						 printf("\nAerolíneas: %.2f"
	    								"\na) Precio con tarjeta de débito: $ %.2f"
	    								"\nb) Precio con tarjeta de crédito $ %.2f"
	    								"\nc) Precio pagando con bitcoin: %.6f BTC"
	    								"d) Precio unitario: %.2f",precioAerolineas, tarjetaDebitoAero, tarjetaCreditoAero, bitcoinAero, precioPorKmAero);
	    						 printf("\n La diferencia de precio es: $ %.2f\n\n", diferenciaDePrecio);


	    			    		 break;
	    			    	 case 5:
	    			    		 CargaForzada();
	    			    		 opcionMenu=6;

	    			    		 break;
	    			    	 case 6:
	    			    		 opcionMenu=6;
	    			    		 break;
	    			    	 }
					 }
					 else
					 {
						 printf("\nError, ingrese una opcion valida ");
					 }

	     }while(opcionMenu!=6);
	     printf("Hasta pronto.......");
}

