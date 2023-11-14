#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int infinito = std::numeric_limits<int>::max();
int const n1 = 3;
int const m1 = 9;
int t[3][9];

int cambio(int v[3],int M, int n){
	if( n < 0 || M < 0){
                return infinito;
        }else if(t[n][M] != -1){
		return t[n][M];
	}else if(M == 0){
		return 0;
	}else if(v[n] > M){
		t[n][M] = cambio(v , M , n-1);
	}else{
		t[n][M] = min(cambio(v , M , n-1),1 + cambio(v , M-v[n] , n)); 
	}

	return t[n][M];
	
}


int main(){
	int v[3] = {1,4,6};

	for(int i = 0; i < n1;i++){
		for(int e = 0; e < m1;e++){
        		if(e == 0){
				t[i][e] = 0;
			}else{
				t[i][e] = -1;
			}		
		}
	}

	for(int i = 0; i < n1;i++){
                for(int e = 0; e < m1;e++){
                        cout << t[i][e] << " ";
                }
                cout << endl;
        }

	cambio(v,8,0);
	cambio(v,8,1);
	cambio(v,8,2);

	for(int i = 0; i < n1;i++){
                for(int e = 0; e < m1;e++){
                        cout << t[i][e] << "\t";
                }
		cout << endl;
        }

	return 0;
}
