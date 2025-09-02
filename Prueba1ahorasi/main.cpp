#include <iostream>
using namespace std;

int main() {
    /*
    CONDICIONAL IF
    --------------------
    if (condicion) {
        // SENTENCIA A: se ejecuta si la condici�n es verdadera
    } else {
        // SENTENCIA B: se ejecuta si la condici�n es falsa
    }

    OPERADORES DE COMPARACI�N
    >   mayor que
    <   menor que
    >=  mayor o igual que
    <=  menor o igual que
    ==  igual a
    !=  diferente de

    OPERADORES L�GICOS
    &&  and
    ||  or
    !   negaci�n
    */

    int a = 10;
    int b = 5;

    if (a > 5) {
        cout << "El numero " << a << " es mayor que 5" << endl;
    } else {
        cout << "El numero " << a << " NO es mayor que 5" << endl;
    }

    // Ejemplos con operadores l�gicos
    if (a > 5 && b == 5) {
        cout << "Se cumplen ambas condiciones: a > 5 y b == 5" << endl;
    }

    if (a < 6 || b == 5) {
        cout << "Se cumple al menos una de las condiciones: a < 6 o b == 5" << endl;
    }

    if (!(a < 5)) {
        cout << "La condici�n (a < 5) es falsa, por lo tanto !(a < 5) es verdadera" << endl;
    }

    return 0;
}
