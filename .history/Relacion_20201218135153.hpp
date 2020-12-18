#ifndef RELACION_H
#define RELACION_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include "Tupla.hpp"
using namespace std;
class Relacion
{

public:
    Relacion()
    {
    }

    Relacion(string nombre)
    {
        this->nombre = nombre;
    }

    void AddEncabezado(string nombre_encabezado)
    {

        this->encabezado.push_back(nombre_encabezado);
    }

    void AddTupla(Tupla objeto_tupla)
    {

        this->tupla_lista.push_back(objeto_tupla);
    }

    string getNombre()
    {
        return this->nombre;
    }

    vector<Relacion> loadFile(string fileName)
    {
        ifstream leer;
        vector<Relacion> temporal;
        leer.open(fileName);
        if (leer.is_open())
        {
            string cadena = "";
            while (getline(leer, cadena))
            {
                temporal.push_back(cadena);
            }
            leer.close();
        }
        else
        {
            cout << "No se encontro el archivo" << endl;
        }
        return temporal;
    }

private:
    string nombre;
    vector<string> encabezado;
    vector<Tupla> tupla_lista;
};

#endif