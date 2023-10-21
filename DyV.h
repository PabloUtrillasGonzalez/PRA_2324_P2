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
int partitionFIN(vector<val3>& v, int ini, int fin){
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
void quickSortFIN(vector<val3>& v,int ini, int fin){
	if(ini < fin){
		int piv = partitionFIN(v,ini,fin);
		quickSortFIN(v,ini,piv-1);
		quickSortFIN(v,piv+1,fin);

	}
}

template<typename val3>
int partitionINI(vector<val3>& v, int ini, int fin){
	val3 x = v[ini];
    int i = ini;
    for(int j = ini + 1; j <= fin; j++) {
        if(v[j] < x) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[ini], v[i]);
    return i;
}


template<typename val3>
void quickSortINI(vector<val3>& v,int ini, int fin){
        if(ini < fin){
                int piv = partitionINI(v,ini,fin);
                quickSortINI(v,ini,piv-1);
                quickSortINI(v,piv+1,fin);

        }
}

template<typename val3>
int partitionMID(vector<val3>& v, int ini, int fin){
	int medio =  (ini + fin) / 2;
	val3 x = v[medio];
	swap(v[medio], v[fin]);
	int i = ini;
	for (int j = ini; j < fin; j++) {
		if (v[j] <= x) {
			swap(v[i], v[j]);
			i++;
		}
	}
	swap(v[i], v[fin]);
	return i;
}


template<typename val3>
void quickSortMID(vector<val3>& v,int ini, int fin){
        if(ini < fin){
                int piv = partitionMID(v,ini,fin);
                quickSortMID(v,ini,piv-1);
                quickSortMID(v,piv+1,fin);

        }
}

