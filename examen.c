/*
    Escriba un programa en C que dada la siguiente declaración de estructuras:

    typedef struct {
        char nombre[40];
        char pais[25];
    }DatosPersonales;

    typedef struct{
        DatosPersonales datos;
        char deporte[30];
        int numMedallas;
    }Deportista;

    1. Realice una función que lea de un archivo de TEXTO la información de los deportistas.
    2. Realice una función que reciba los deportistas leídos y calcule e imprima el número de medallas por
    deporte.

    Nota: Dentro del código existe un arreglo que contiene los nombres de todos los deportes que existen en el archivo.

        char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};
*/

#include <stdio.h>
#include <string.h>

typedef struct {

    char nombre[40];
    char pais[25];

}DatosPersonales;

typedef struct{
    DatosPersonales datos;
    char deporte[30];
    int numMedallas;

}Deportista;

int main()
{
    FILE *archivo;
    Deportista deportistas[100];
    char deporte[6][30] = {"Natación", "Atletismo", "Ciclismo", "Gimnasia", "Equitacion", "Esgrima"};

    archivo = fopen("informacion.txt", "r");
    archivo = fopen("informacion.txt", "w");

    fscanf(archivo, "%s", Deportista.deporte);
    fscanf(archivo, "%d", &Deportista.numMedallas);

    for(i=0; i<6; i++)
    {
        fprintf(archivo, "%s %d", deportistas.deporte[i], deportistas.numMedallas)
    }



    fclose(archivo);

    return 0;
}

