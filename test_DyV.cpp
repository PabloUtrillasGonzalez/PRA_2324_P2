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

	cout << endl << "Busqueda invertida:" << endl;
	
	vector<int> d = {10,9,8,7,6,5,4,3,2,1};
        cout << "Busqueda entero 2 en posicion: "<<busBin_INV(2,d,0,d.size()) << endl;

        vector<char> e = {'j','i','h','g','f','e','d','c','b','a'};
        cout << "Busqueda char f en posicion: "<<busBin_INV('f',e,0,e.size()) << endl;

        vector<double> f = {10.3,9.11,7.2,6.5,5.0,3.5,2.2,2.0,1.5,1.0};
        cout << "Busqueda float 9.11 en posicion: "<<busBin_INV(9.11,f,0,f.size()) << endl;

        return 0;
}

