#include <iostream>

using namespace std;

int main()
{
   /**
    *Implemente un programa que solicite un numero por teclado
    * e imprima los numeros primos menores que dicho numero.
    */
    /**
    *TODO
    */
    long long n,j=2,d=0,i=2; cin>>n;

    while(j<=n) {
        if( j == 2){
          cout<<"2 ";
          j++;
          continue;

        }
        while( i*i <= j){
            if( j%i == 0){
                d++;
            }
            if(d>0) break;
            i++;
        }
        if( d==0)
            cout<<j<<" ";
        d=0;i=2;
        j++;
    }

    return 0;
}
