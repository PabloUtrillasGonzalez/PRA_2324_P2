#include "DyV.h"
#include <iostream>

using namespace std;

int main(){

        vector<int> a = {1,2,3,4,5,6,7,8,9,10};
        cout << "Busqueda entero 2 en posicion: "<<busBin(2,a,0,a.size()) << endl;

	vector<char> b = {'a','b','c','d','e','f','g','h','i','j'};
        cout << "Busqueda char f en posicion: "<<busBin('f',b,0,b.size()) << endl;

	vector<double> c = {1.0,1.5,2.0,2.2,3.5,5.0,6.5,7.2,9.11,10.3};
        cout << "Busqueda float 9.11 en posicion: "<<busBin(9.11,c,0,c.size()) << endl;

        return 0;
}

