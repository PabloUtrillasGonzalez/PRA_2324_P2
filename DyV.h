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


template<typename val3>
int partition(vector<val3>& v, int ini, int fin){
        val3 x = v[fin];
        int i = ini;

        for(int j = ini; j < fin ; j++){
                if(v[j] <= x){
                        val3 aux = v[j];
                        v[j] = v[i];
                        v[i] = aux;
			i= i + 1;
                }
        }
        val3 aux = v[i];
        v[i] = v[fin];
        v[fin] = aux;
        return i;
}


template<typename val3>
void quickSort(vector<val3>& v,int ini, int fin){
	if(ini < fin){
		int piv = partition(v,ini,fin);
		quickSort(v,ini,piv-1);
		quickSort(v,piv+1,fin);

	}
}
