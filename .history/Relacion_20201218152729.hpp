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

    vector<string> getEncabezado()
    {
        return this->encabezado;
    }

    vector<Tupla> getTupla()
    {
        return this->tupla_lista;
    }

    void AddTupla(Tupla objeto_tupla)
    {

        this->tupla_lista.push_back(objeto_tupla);
    }

    string getNombre()
    {
        return this->nombre;
    }

    vector<Relacion> Cargar(string nombre)
    {
        ifstream leer;
        vector<Relacion> temporal;
        leer.open(nombre);
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

    void Guardar()
    {
        ofstream guardar;
        string archivo = "./";
        guardar.open(archivo + nombre);
        for (int i = 0; i < encabezado.size(); i++)
        {
            guardar << encabezado[i] << ",";
        }

        guardar << endl;

        if (!tupla_lista.empty())
        {
            for (int i = 0; i < tupla_lista.size(); i++)
            {
                for (int j = 0; j < tupla_lista[i].getAtributo().size(); j++)
                {
                    guardar << tupla_lista[i].getAtributo()[j] << ",";
                }
                guardar << endl;
            }
        }

        guardar.close();
    }

    void GuardarRelacion(string nombre)
    {
        ofstream guardar;
        string archivo = "./";
        guardar.open(archivo + nombre,ios::app);

        guardar << this->nombre;
        for (int i = 0; i < encabezado.size(); i++)
        {
            guardar << encabezado[i] << ",";
        }

        guardar << endl;

    }

private:
    string nombre;
    vector<string> encabezado;
    vector<Tupla> tupla_lista;
};

#endif