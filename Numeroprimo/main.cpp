#include <iostream>

using namespace std;

int main()
{
    /**
    *Implemente un programa que solicite un numero por teclado
    * e indique si dicho numero es un "numero primo"
    */
    long long n, i=1, d=0;
    cin >> n;
    while( i <= n) {
        if( n%i == 0){
            d++;
        }
        i++;
    }
    cout<<( (d == 2)? "primo" : "no primo");

    /**
    *Implemente un programa que solicite un numero por teclado
    * e imprima los numeros primos menores que dicho numero.
    */
    int n, i=2;
    cout << "Ingresar"
    cin >> n;
      while(i < n)


    return 0;
}
