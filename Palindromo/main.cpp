#include <iostream>

using namespace std;

int main()
{
    /**
    *Escribir un programa que pida un numero (3 a 9 digitos)
    * y evalue el dicho numero es un palindromo
    *Ejm
           1331    -> es palindromo
           2133214 -> no es palindromo
           31311313-> es palindromo
    */
    long long num,original, inverso = 0;
    int digitos = 0;

    cout << "Ingrese un numero (3 a 9 digitos): ";
    cin >> num;

    original = num

    long long temp = num;
    while(temp > 0) {
        temp /=10;
        digitos++;
    }

    if (digitos <3   digitos >9) {
        cout << " El numero debe tener entre 3 y 9 digitos." << endl;
        return o;
    }


    return 0;


}
