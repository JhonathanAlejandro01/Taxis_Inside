#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <stdio.h>

//taxis
typedef struct taxi{
	char *patente;
	char *marca;
	char *modelo;
	int año;
	char *estado;
	char *maletero;
}characteristic;

//taxistas
typedef struct taxista{
	char *titular;
	int CIUT;
}driver;

//zona
typedef struct zona{
	int id_zona;
	char *nombre;
}zone;

//estacion
typedef struct estacion{
	int id_estacion;
	int id_zona;
	int cantidad_taxis;
}station;

typedef struct servicios{
	int id_servicio;
	int id_zona;
	int id_estacion;
}service;


#endif CONTROLLER_H
