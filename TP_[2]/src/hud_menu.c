/*
 * hud_menu.c
 *
 *  Created on: 14 may. 2022
 *      Author: anthar.asskoul
 */
#include "hud_menu.h"

//	================================================================================================================
//	> FUNCION ENCABEZADO PRESENTACION
char iniciarPrograma (void)
{
	char opcionValidada;

	system("cls");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                  渦? TRABAJO PRACTICO N2 朮?                    ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                                                                 ?\n");
	printf("?  PROGRAMA ALTAS, BAJAS, MODIFICACIONES E INFORMES DE PASAJEROS  ?\n");
	printf("?                                                                 ?\n");
	printf("?  DIVISION: 1F                                                   ?\n");
	printf("?  ALUMNO: Anthar Asskoul                                        ?\n");
	printf("?                                                                 ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                    ?DESEA INICIAR EL PROGRAMA?                  ?\n");
	printf("?                       [S] SI         [N] NO                     ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("\n");

	opcionValidada = entrada_respuestaUsuario ("INGRESE UNA OPCION\n");

	system("cls");

	return opcionValidada;
}
//	================================================================================================================
//	> FUNCION MENU PRINCIPAL
int menuPricipal (void)
{
	int opcionMenuValidada;

	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                     渦? MENU  PRINCIPAL 朮?                     ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [1] ALTA DE PASAJERO                                           ?\n");
	printf("?  [2] MODIFICAR PASAJERO                                         ?\n");
	printf("?  [3] BAJA DE PASAJERO                                           ?\n");
	printf("?  [4] INFORMES                                                   ?\n");
	printf("?  [5] PASAJEROS HARDCODEADOS                                     ?\n");
	printf("?  [6] SALIR                                                      ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, MP_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}
//	================================================================================================================
//	> FUNCION ENCABEZADO ALTA
void encabezadoAltas (void)
{
	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                     渦? ALTA DE PASAJERO 朮?                    ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  POR FAVOR LLENE LOS DATOS QUE SE VAN SOLICITANDO PARA EL ALTA  ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO MODIFICACION
int menuModificacion (void)
{
	int opcionMenuValidada;

	//system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                渦? MODIFICACION DE PASAJERO 朮?                 ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [1] NOMBRE                                                     ?\n");
	printf("?  [2] APELLIDO                                                   ?\n");
	printf("?  [3] PRECIO                                                     ?\n");
	printf("?  [4] TIPO DE PASAJERO                                           ?\n");
	printf("?  [5] CODIGO DE VUELO                                            ?\n");
	printf("?  [6] SALIR                                                      ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, MM_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}
//	================================================================================================================
//	> FUNCION ENCABEZADO BAJA
void encabezadoBajas (void)
{
	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                     渦? BAJA DE PASAJERO 朮?                    ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?   POR FAVOR ELIGA DE LA SIGUIENTE LISTA EL PASAJERO POR SU ID   ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO BAJA
void encabezadoDarDeBaja (void)
{
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
	printf("?                                  EL SIGUIENTE PASAJERO SE DARA DE BAJA                                 ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO TABLA
void encabezadoTabla (void)
{
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
	printf("?  ID   |      NOMBRE     |    APELLIDO     |    PRECIO    | COD. VUELO | TIPO PASAJERO | EST. DE VUELO  ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵\n");
}
//	================================================================================================================
//	> FUNCION PIE DE PAGINA TABLA
void PieDePaginaTabla (void)
{
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕\n");
}
//	================================================================================================================
//	> FUNCION LISTADO DE PASAJEROS
int menuListado (void)
{
	int opcionMenuValidada;

	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                   渦? LISTADO DE PASAJERO 朮?                   ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [1] LISTADO DE PASAJEROS POR APELLIDO Y TIPO PASAJERO          ?\n");
	printf("?  [2] TOTAL Y PROMEDIO DE PRECIOS DE LOS PASAJES,                ?\n");
	printf("?      Y CUANTOS PASAJEROS SUPERAN EL PRECIO PROMEDIO             ?\n");
	printf("?  [3] LISTADO DE LOS PASAJEROS POR CODIGO DE VUELO Y             ?\n");
	printf("?      ESTADOS DE VUELOS ACTIVOS                                  ?\n");
	printf("?  [4] SALIR                                                      ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, ML_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}

