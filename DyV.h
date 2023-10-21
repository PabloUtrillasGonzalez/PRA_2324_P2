#include <iostream>
#include <vector>

using namespace std;

template<typename val>

int busBin(val valor, vector<val>& vect,int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int posMedia = (ini + fin)/2;
	if(vect[posMedia] == valor){
		return posMedia;
	}else{
		if(vect[posMedia] < valor){
			return busBin(valor,vect,posMedia+1,fin);
		}else{
			return busBin(valor,vect,ini,posMedia-1);
		}
	}
}
