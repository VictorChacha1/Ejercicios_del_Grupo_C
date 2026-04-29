#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archivo("datos.txt");
    if (!archivo) { // Validación de existencia
        cerr << "Error: No se pudo abrir el archivo." << endl;
        return 1;
    }
    string nombre;
    int edad;
    while (archivo >> nombre >> edad) {
        cout << "Nombre: " << nombre << " | Edad: " << edad << endl;
    }
    archivo.close();
    return 0;
}
