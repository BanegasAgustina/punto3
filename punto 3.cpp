#include <bits/stdc++.h>

using namespace std;

class Alumno {
public:
    string nombre;
    int finesDeSemanaPerdidos;
    bool sirveLaMateria;

    Alumno(string n, int f, bool s) : nombre(n), finesDeSemanaPerdidos(f), sirveLaMateria(s) {}
};

int main() {
    vector<Alumno> alumnos;
    int n;

    cout << "Ingrese el numero de alumnos: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string nombre;
        int finesDeSemanaPerdidos;
        bool sirveLaMateria;

        cout << "Ingrese el nombre del alumno: ";
        cin >> nombre;
        cout << "Ingrese la cantidad de fines de semana perdidos: ";
        cin >> finesDeSemanaPerdidos;
        cout << "¿Sirve la materia? (1 para Si, 0 para No): ";
        cin >> sirveLaMateria;

        alumnos.emplace_back(nombre, finesDeSemanaPerdidos, sirveLaMateria);
    }

    cout << "\nListado de alumnos que respondieron NO o tienen menos de 5 fines de semana perdidos:\n";
    for (auto& alumno : alumnos) {
        if (!alumno.sirveLaMateria || alumno.finesDeSemanaPerdidos < 5) {
            cout << "Nombre: " << alumno.nombre << endl;
            cout << "Fines de Semana Perdidos: " << alumno.finesDeSemanaPerdidos << endl;
            cout << "Sirve la Materia: " << (alumno.sirveLaMateria ? "Si" : "No") << endl;
            cout << "---------------------------------" << endl;
        }
    }

    return 0;
}