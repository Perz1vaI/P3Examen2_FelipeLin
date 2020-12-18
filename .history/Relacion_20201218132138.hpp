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

    
private:
    string nombre;
    vector<string> encabezado;
    vector<Tupla> tupla_lista;
};

#endif