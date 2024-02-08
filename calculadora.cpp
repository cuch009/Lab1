#include <iostream>

using namespace std;

int main() {
    float num1, num2, resultado;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Seleccione la operacion (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "No se puede dividir por cero." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            return 1; 
    }

    cout << "El resultado es: " << resultado << endl;

    return 0; 
}
