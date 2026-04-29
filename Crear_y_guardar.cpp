#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivo("datos.txt");
    if (archivo.is_open()) {
        archivo << "Juan" << " " << 20 << " " << "Quito" << endl;
        archivo.close();
        cout << "Archivo creado con exito." << endl;
    }
    return 0;
}
