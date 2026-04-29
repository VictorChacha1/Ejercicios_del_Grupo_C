#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream lectura("notas.txt");
    if (!lectura) {
        cerr << "Error: El archivo 'notas.txt' no existe." << endl;
        return 1;
    }

    string nombre;
    float n1, n2, n3, promedio, sumaGenerales = 0;
    int totalEstudiantes = 0, aprobados = 0;

    cout << "--- REPORTE DE NOTAS ---" << endl;
    while (lectura >> nombre >> n1 >> n2 >> n3) {
        promedio = (n1 + n2 + n3) / 3;
        totalEstudiantes++;
        sumaGenerales += promedio;

        cout << "Estudiante: " << nombre << endl;
        cout << "Promedio: " << promedio << endl;
        
        if (promedio >= 7) {
            cout << "Estado: Aprobado" << endl;
            aprobados++;
        } else {
            cout << "Estado: Reprobado" << endl;
        }
        cout << "-----------------------" << endl;
    }

    if (totalEstudiantes > 0) {
        cout << "\n--- ESTADISTICAS GLOBALES ---" << endl;
        cout << "Total Estudiantes: " << totalEstudiantes << endl;
        cout << "Total Aprobados: " << aprobados << endl;
        cout << "Promedio General del Grupo: " << sumaGenerales / totalEstudiantes << endl;
    }

    lectura.close();
    return 0;
}
