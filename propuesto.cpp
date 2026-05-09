#include <iostream>
using namespace std;

int main() {
    string usuario;
    int password;

    cout << "Ingrese el usuario: ";
    cin >> usuario;

    // Usamos switch con una condición convertida a entero
    switch(usuario == "admin") {
        case 1: // true
            cout << "Ingrese la contraseña: ";
            cin >> password;

            if(password == 1234) {
                cout << "Acceso concedido." << endl;
            } else {
                cout << "Contraseña incorrecta." << endl;
            }
            break;

        case 0: // false
            cout << "Usuario no permitido." << endl;
            break;
    }

    return 0;
}