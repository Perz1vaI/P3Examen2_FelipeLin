#ifndef TUPLA_H
#define TUPLA_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Tupla
{

public:
    Tupla()
    {
    }

    Tupla(int ID)
    {
        this->ID = ID;
    }

    void AddAtributos(string atributos)
    {

        this->atributos.push_back(atributos);
    }

    vector<string> getAtributo(){
        return this->atributos;
    }

    int getID(){
        return this->ID;
    }

private:
    int ID;
    vector<string> atributos;
};

#endif