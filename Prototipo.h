#ifndef PROTOTIPO_H_INCLUDED
#define PROTOTIPO_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include "Prototipo.h"

using namespace std;

class CD
{
private:
    string Titulo;
    string Artista;
    string Genero;
    string FechaL;
    int Codigo;
    int cont;
public:
    void Agregar();
    void Mostrar();
    void Consulta();
    void Eliminar();
    void Recuperar(string);
};

class Lista
{
private:
    CD Inicio[50];
public:
    int Menu();
    void Recuperar(string var);
};



#endif // PROTOTIPO_H_INCLUDED
