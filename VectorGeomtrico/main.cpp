#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
class Punto {
        int x;
        int y;
    public:
        Punto() {
            x = 0;
            y = 0;
        }
        Punto(int_x, int_y){
        }
        void modificar(int_x,int_y){
            x = _x;
            y = _y;
        }


};

class VectorGeomtrico {
    public:
        Punto ini;
        Punto fin;
        void print() {
            ini.print();
            cout << "-> ";
            fin.print();
        }


};
int main()
{
    VectorGeometrico vg;
    vg.init.x = 0;
    vg.init.y = 0;
    vg.fin.x = 3;
    vg.fin.y = 4;
}
