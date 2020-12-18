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
            string buffer = "";
            while (getline(leer, buffer))
            {
                temporal.push_back(buffer);
            }
            leer.close();
        }
        else
        {
            cout << "Could not be found " << endl;
        }
        return temporal;
    }

private:
    string nombre;
    vector<string> encabezado;
    vector<Tupla> tupla_lista;
};

#endif