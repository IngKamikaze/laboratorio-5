#include <iostream>
using namespace std;
int main() {
  
    double nota;

cout << " ingrese la nota: ";
cin >> nota;

if(nota < 0 || nota > 100) {
    cout << "Ingrese una nota valida.";
}
 else  {
        
    if (nota >= 90){
        cout << "Excelente, ¡aprobando con honores!";
    }

    else if (nota < 60) {
        cout << "Lo siento, no has aprobado. Necesitas estudiar.";
    }
    
    else {
         cout << "Buen trabajo, ¡Aprobado!";
    }
 } 
     return 0;
    }