#include <iostream>
#include "Relacion.hpp"
#include "Tupla.hpp"
using namespace std;
int main()
{
    vector<Relacion> lista_relacion;
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
            int numero_encabezado;
            cout << "**CREAR RELACIONES**" << endl;
            cout << "Ingrese el nombre de la relacion: ";
            cin >> nombre;

            for (int i = 0; i < lista_relacion.size(); i++)
            {
                /* code */
            }
            

            if (nombre )
            {
                /* code */
            }
            

            Relacion *r = new Relacion(nombre);

            cout << "Ingrese el enbezado que va agregar: " << endl;
            cin >> encabezado;

            r->AddEncabezado(encabezado);

            cout << "Desea ingresar otro encabezado: 1. continuar \n 2. salir" << endl;
            cout << "Ingrese la opcion: " << endl;
            cin >> numero_encabezado;
            while (numero_encabezado != 2)
            {
                cout << "Ingrese el enbezado que va agregar: " << endl;
                cin >> encabezado;
                r->AddEncabezado(encabezado);
            }



            break;
        }
        case 2:
        {

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