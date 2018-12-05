#include <iostream>

using namespace std;

void obtenerTablaMultiplicar(int limite, int valor_tabla){

        int i = 1;
        while(i <= limite){
            int multiplicacion = valor_tabla * i;
            cout << valor_tabla << " * " << i << " = " << multiplicacion << endl;
            i = i + 1;
        }
}

void obtenerTablaSumar(int limite, int valor_tabla){
    for(int i=1; i <= limite; i++){
            int suma = (valor_tabla + i);
            cout << valor_tabla << " + " << i << " = " << suma << endl;
    }
}

int main()
{
    int i = 1;
    int limite;
    int valor_tabla;
    int opcion;

    cout << "Ingrese el límite de la tabla: " << endl;
    cin >> limite;
    cout << "Ingrese el valor de la tabla: " << endl;
    cin >> valor_tabla;
    cout << "Ingrese una opción.. Opcion (1) Para Multiplicar u Opcion (2) Para Sumar." << endl;
    cin >> opcion;

    if(opcion==1){
        obtenerTablaMultiplicar(limite, valor_tabla);
    }else{
        if(opcion==2){
            obtenerTablaSumar(limite, valor_tabla);
        }else{
            cout << "Opción incorrecta.";
        }
    }
}
