#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0, promedio;
    for(int i = 1; i <= 5; i++) {
        cout << "Ingrese nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    promedio = suma / 5;
    cout << "Promedio: " << promedio << " - Estado: ";
    if (promedio >= 9) cout << "Excelente";
    else if (promedio >= 7) cout << "Bueno";
    else cout << "Regular";
    return 0;
}
