#ifndef RELACION_H
#define RELACION_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
class Relacion
{

public:
    Relacion()
    {
    }

    
private:
    string file_name;
    vector<string> headers;
    bool header_bool;
    vector<vector<string> > data;
    int data_count;
};

#endif