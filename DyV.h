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

template<typename val2>

int busBin_INV(val2 valor, vector<val2>& vect,int ini, int fin){
        if(ini > fin){
                return -1;
        }
        int posMedia = (ini + fin)/2;
        if(vect[posMedia] == valor){
                return posMedia;
        }else{
                if(vect[posMedia] < valor){
                        return busBin_INV(valor,vect,ini,posMedia-1);
                }else{
			return busBin_INV(valor,vect,posMedia+1,fin);
                }
        }
}

