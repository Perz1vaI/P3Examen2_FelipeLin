#include <iostream>
#include <cstdlib>
#include "Relacion.hpp"
#include "Tupla.hpp"
using namespace std;
int main()
{
    srand(time(NULL));
    Relacion load;
    vector<Relacion> lista_relacion;
    //lista_relacion = load.Cargar("lista_relacion");
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

            if (lista_relacion.empty())
            {
                cout << "Ingrese el nombre de la relacion: ";
                cin >> nombre;

                Relacion r(nombre);

                cout << "Ingrese el encabezado que va agregar: ";
                cin >> encabezado;

                r.AddEncabezado(encabezado);

                cout << "Desea ingresar otro encabezado:\n1. continuar\n2. salir" << endl;
                cout << "Ingrese la opcion: ";
                cin >> numero_encabezado;
                while (numero_encabezado != 2)
                {
                    cout << "Ingrese el encabezado que va agregar: ";
                    cin >> encabezado;
                    r.AddEncabezado(encabezado);
                    cout << "Desea ingresar otro encabezado:\n1. continuar\n2. salir" << endl;
                    cout << "Ingrese la opcion: ";
                    cin >> numero_encabezado;
                }

                lista_relacion.push_back(r);
                r.Guardar();
                r.GuardarRelacion("lista_relacion");

                cout << "Se añadio una relacion existosamente! " << endl;
            }
            else
            {

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
                    Relacion r(nombre);

                    cout << "Ingrese el encabezado que va agregar: ";
                    cin >> encabezado;

                    r.AddEncabezado(encabezado);

                    cout << "Desea ingresar otro encabezado:\n1. continuar\n2. salir" << endl;
                    cout << "Ingrese la opcion: ";
                    cin >> numero_encabezado;
                    while (numero_encabezado != 2)
                    {
                        cout << "Ingrese el enbezado que va agregar: " << endl;
                        cin >> encabezado;
                        r.AddEncabezado(encabezado);
                        cout << "Desea ingresar otro encabezado:\n1. continuar\n2. salir" << endl;
                        cout << "Ingrese la opcion: ";
                        cin >> numero_encabezado;
                    }

                    lista_relacion.push_back(r);
                    r.Guardar();
                    r.GuardarRelacion("lista_relacion");
                    cout << "Se añadio una relacion existosamente! " << endl;
                }
                else
                {
                    break;
                }
            }

            break;
        }
        case 2:
        {
            cout << "**VER RELACIONES**" << endl;

            if (lista_relacion.empty())
            {
                cout << "No hay relaciones creadas! " << endl;
            }
            else
            {
                for (int i = 0; i < lista_relacion.size(); i++)
                {
                    cout << i << "-->" << lista_relacion[i].getNombre() << endl;
                }
                int num_relacion;
                cout << "Ingrese cual relacion quiere ver: " << endl;
                cin >> num_relacion;

                cout << "**" << lista_relacion[num_relacion].getNombre() << "**" << endl;
                cout << "| ";
                for (int i = 0; i < lista_relacion[num_relacion].getEncabezado().size(); i++)
                {
                    cout << lista_relacion[num_relacion].getEncabezado()[i] << " | ";
                }
                cout << endl;
                for (int i = 0; i < lista_relacion[num_relacion].getTupla().size(); i++)
                {
                    for (int j = 0; j < lista_relacion[num_relacion].getTupla().at(i).getAtributo().size(); j++)
                    {
                        cout << lista_relacion[num_relacion].getTupla().at(i).getAtributo()[j];
                    }

                    cout << endl;
                }
            }

            break;
        }
        case 3:
        {
            cout << "**INSERTAR TUPLA**" << endl;

            if (lista_relacion.empty())
            {
                cout << "No hay relaciones creadas! " << endl;
            }
            else
            {
                for (int i = 0; i < lista_relacion.size(); i++)
                {
                    cout << i << "-->" << lista_relacion[i].getNombre() << endl;
                }

                int num_relacion;
                cout << "Ingrese cual relacion quiere añadir una tupla: " << endl;
                cin >> num_relacion;

                int id_rand = rand() % 8999 + 1000;
                Tupla t(id_rand);

                lista_relacion[num_relacion].AddTupla(t);

                int numero_tupla;
                string atributo;

                for (int i = 0; i < lista_relacion[num_relacion].getEncabezado().size(); i++)
                {
                    cout << "Ingrese un " << lista_relacion[num_relacion].getEncabezado()[i] << endl;
                    cin >> atributo;
                    lista_relacion[num_relacion].getTupla().back().AddAtributos(atributo);
                    //cout <<  "::::" << lista_relacion[num_relacion].getTupla().back().getAtributo()[0] << endl;
                }

                cout << "Desea ingresar otra tupla:\n1. continuar\n2. salir" << endl;
                cout << "Ingrese la opcion: ";
                cin >> numero_tupla;
                while (numero_tupla != 2)
                {
                    for (int i = 0; i < lista_relacion[num_relacion].getEncabezado().size(); i++)
                    {
                        cout << "Ingrese un " << lista_relacion[num_relacion].getEncabezado()[i] << endl;
                        cin >> atributo;
                        lista_relacion[num_relacion].getTupla().back().AddAtributos(atributo);
                    }
                    cout << "Desea ingresar otra tupla:\n1. continuar\n2. salir" << endl;
                    cout << "Ingrese la opcion: ";
                }

                lista_relacion[num_relacion].Guardar();
                cout << "Se añadio una tupla existosamente! " << endl;
            }

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