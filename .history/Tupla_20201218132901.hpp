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
    Tupla(int ID)
    {
        this->ID = ID;
    }

    
private:
    int ID;
    vector<string> atributos;
    
};

#endif