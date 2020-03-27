#ifndef CONTROLLER_H
#define CONTROLLER_H

//taxis
#include <stdio.h>
typedef struct taxi{
	char *patente;
	char *marca;
	char *modelo;
	int año;
	char *estado;
	char *maletero;
} characteristic;

//taxistas
typedef struct taxista{
	char *titular;
	int CIUT;
} driver;



#endif CONTROLLER_H
