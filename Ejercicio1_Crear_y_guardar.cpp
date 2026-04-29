#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombre, ciudad;
    int edad;

    cout << "Ingrese nombre : "; cin >> nombre;
    cout << "Ingrese edad   : "; cin >> edad;
    cout << "Ingrese ciudad : "; cin >> ciudad;

    ofstream archivo("datos.txt");

    if (!archivo.is_open()) {
        cout << "ERROR: No se pudo crear el archivo." << endl;
        return 1;
    }

    // Guardamos los datos solicitados
    archivo << "Nombre: " << nombre << endl;
    archivo << "Edad  : " << edad << endl;
    archivo << "Ciudad: " << ciudad << endl;

    archivo.close(); // Cerramos el flujo[cite: 1]

    cout << "\nArchivo 'datos.txt' creado exitosamente." << endl;

    return 0;
}
