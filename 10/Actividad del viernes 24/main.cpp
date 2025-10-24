#include <iostream>

using namespace std;

class Punto {
    public:
       int x;
       int y;
       void print() {
           cout<< "{" << x << "," << y << "}" << endl;
       }
       void modificar(int_x,int_y){
           x = _x;
           y = _y;
       }
};

float distancia(Punto p1, Punto p2){
    return sqrt (pow (p2.x - p1.x), 2)+ pow(p2.y - p1.y), 2) );
}

int main()
{

    Punto pl;
    pl.x = 0;
    pl.y = 0;
    pl.print();

    Punto p2;
    p2.x = 3;
    p2.y = 4;
    pl.print();


    float distancia = sqrt ( pow (p2_x - pl_x)2)+ pow(p2_y - pl_y),2) );
    cout << distancia << endl;

    p1.modificar(1, 1);
    p2.modificar(5, 5);

    return 0;
}
