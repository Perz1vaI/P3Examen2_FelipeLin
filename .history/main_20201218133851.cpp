#include <iostream>
using namespace std;
int main()
{
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

            cout << "Ingrese el enbezado que va agregar: " << endl;
            cin >> encabezado;
            cout << "1. continuar \n 2. salir" << endl;
            cout << "Desea ingresar otro encabezado: " << endl;
            cin >> numero_encabezado;
            while (numero_encabezado != 2)
            {
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