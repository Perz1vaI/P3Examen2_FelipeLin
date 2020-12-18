#ifndef TUPLA_H
#define TUPLA_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
class Tupla
{

public:
    Tupla()
    {
    }

    
private:
    string nombre;
    vector<string> encabezado;
    vector<Tupla> > data;
};

#endif