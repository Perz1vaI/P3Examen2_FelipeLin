#include <iostream>
#include "Relacion.hpp"
#include "Tupla.hpp"
using namespace std;
int main()
{
    Relacion load;
    vector<Relacion> lista_relacion;
    lista_relacion = load.Cargar("lista_relacion");
    int menu;
    cout << "1. Crear relaciones\n2. Ver relaciones\n3. Insertar tupla\n4. Salida\n";
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 4)
    {
        switch (menu)
        {
        case 1:
        {
            string nombre, encabezado;
            bool entrada;
            int numero_encabezado;
            cout << "**CREAR RELACIONES**" << endl;
            cout << "Ingrese el nombre de la relacion: ";
            cin >> nombre;

            for (int i = 0; i < lista_relacion.size(); i++)
            {
                if (nombre == lista_relacion[i].getNombre())
                {
                    cout << "No puede ingresar ese nombre porque ya existe! " << endl;
                    entrada = false;
                }
                else
                {
                    entrada = true;
                }
            }

            if (entrada)
            {
                Relacion *r = new Relacion(nombre);

                cout << "Ingrese el enbezado que va agregar: " << endl;
                cin >> encabezado;

                r->AddEncabezado(encabezado);

                cout << "Desea ingresar otro encabezado:\n1. continuar\n2. salir" << endl;
                cout << "Ingrese la opcion: ";
                cin >> numero_encabezado;
                while (numero_encabezado != 2)
                {
                    cout << "Ingrese el enbezado que va agregar: " << endl;
                    cin >> encabezado;
                    r->AddEncabezado(encabezado);
                }
            }
            else
            {
                break;
            }

            break;
        }
        case 2:
        {
            for (int i = 0; i < lista_relacion.size(); i++)
            {
                cout << i + 1 << " " << lista_relacion[i].getNombre() << endl;
            }
            int num_relacion;
            cout << "Ingrese cual relacion quiere ver: " << endl;
            cin >> num_relacion;

            cout << "**" << lista_relacion[num_relacion].getNombre() << "**" << endl;
            cout << "| ";
            for (int i = 0; i < lista_relacion[num_relacion].getEncabezado().size(); i++)
            {
                cout << lista_relacion[num_relacion].getEncabezado()[i] << "| ";
            }
            cout << endl;
            for (int i = 0; i < lista_relacion[num_relacion].getTupla().size() ; i++)
            {
                for (int j = 0; j < lista_relacion[num_relacion].getTupla().at(i).getAtributo().size(); j++)
                {
                    cout << lista_relacion[num_relacion].getTupla().at(i).getAtributo()[j];
                }
                
            }
            
            
            break;
        }
        case 3:
        {

            break;
        }
        default:
        {
            cout << "No existe esa opcion\n";
            break;
        }
        }

        cout << "1. Crear realciones\n2. Ver relaciones\n3. Insertar tupla\n4. Salida\n";
        cout << "Ingrese la opcion: ";
        cin >> menu;
    }
}