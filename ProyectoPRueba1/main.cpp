#include <iostream>
using namespace std;

/* SUBMENÚS */
void menuVentas();
void menuTesoreria();
void menuProductos();
void menuPersonas();
void menuRegistros();
void menuLogistica(); // opcional

int main() {
    int op;

    do {
        system("cls");
        cout << "===============================\n";
        cout << "            SISTEMA\n";
        cout << "===============================\n\n";

        cout << "[1] Ventas\n";
        cout << "     - Nueva venta\n";
        cout << "     - Modificar venta\n";
        cout << "-------------------------------\n";

        cout << "[2] Tesoreria\n";
        cout << "     - Caja (Ingresos/Egresos)\n";
        cout << "-------------------------------\n";

        cout << "[3] Productos\n";
        cout << "     - Crear articulo\n";
        cout << "     - Modificar articulo\n";
        cout << "     - Eliminar articulo\n";
        cout << "     - Mostrar inventario\n";
        cout << "-------------------------------\n";

        cout << "[4] Personas\n";
        cout << "     - Crear cliente\n";
        cout << "     - Modificar cliente\n";
        cout << "     - Eliminar cliente\n";
        cout << "-------------------------------\n";

        cout << "[5] Registros\n";
        cout << "     - Buscar boleta\n";
        cout << "     - Buscar factura\n";
        cout << "-------------------------------\n";

        cout << "[6] Logistica (opcional)\n";
        cout << "     - Traslados de articulos\n";
        cout << "-------------------------------\n";

        cout << "[0] Salir\n\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch(op) {
            case 1: menuVentas(); break;
            case 2: menuTesoreria(); break;
            case 3: menuProductos(); break;
            case 4: menuPersonas(); break;
            case 5: menuRegistros(); break;
            case 6: menuLogistica(); break;
        }

    } while(op != 0);

    return 0;
}


/* ============================
   SUBMENÚ DE VENTAS
   ============================ */
void menuVentas() {
    int op;
    do {
        system("cls");
        cout << "=== VENTAS ===\n";
        cout << "1. Nueva venta\n";
        cout << "2. Modificar venta\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> op;
    } while(op != 0);
}


/* ============================
   SUBMENÚ DE TESORERÍA
   ============================ */
void menuTesoreria() {
    int op;
    do {
        system("cls");
        cout << "=== TESORERIA ===\n";
        cout << "1. Caja (Ingresos/Egresos)\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> op;
    } while(op != 0);
}


/* ============================
   SUBMENÚ DE PRODUCTOS
   ============================ */
void menuProductos() {
    int op;
    do {
        system("cls");
        cout << "=== PRODUCTOS ===\n";
        cout << "1. Crear articulo\n";
        cout << "2. Modificar articulo\n";
        cout << "3. Eliminar articulo\n";
        cout << "4. Mostrar inventario\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> op;
    } while(op != 0);
}


/* ============================
   SUBMENÚ DE PERSONAS
   ============================ */
void menuPersonas() {
    int op;
    do {
        system("cls");
        cout << "=== PERSONAS ===\n";
        cout << "1. Crear cliente\n";
        cout << "2. Modificar cliente\n";
        cout << "3. Eliminar cliente\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> op;
    } while(op != 0);
}


/* ============================
   SUBMENÚ DE REGISTROS
   ============================ */
void menuRegistros() {
    int op;
    do {
        system("cls");
        cout << "=== REGISTROS ===\n";
        cout << "1. Buscar boleta\n";
        cout << "2. Buscar factura\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> op;
    } while(op != 0);
}


/* ============================
   SUBMENÚ OPCIONAL LOGÍSTICA
   ============================ */
void menuLogistica() {
    int op;
    do {
        system("cls");
        cout << "=== LOGISTICA ===\n";
        cout << "1. Traslados de articulos\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> op;
    } while(op != 0);
}

