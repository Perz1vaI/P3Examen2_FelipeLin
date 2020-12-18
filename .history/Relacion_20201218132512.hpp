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
    Relacion(string nombre)
    {
        this->nombre = nombre;
    }

    void AddEncabezado(string nombre_encabezado){
        this->encabezado.push_back(nombre_encabezado);
    }

    
private:
    string nombre;
    vector<string> encabezado;
    vector<Tupla> tupla_lista;
};

#endif