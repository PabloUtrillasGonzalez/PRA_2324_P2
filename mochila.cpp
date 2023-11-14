#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int m1 = 6;
const int n1 = 5;
int v[n1][m1];
int res[n1];

// Rellenamos con 0 y -1
void rellenar(int N, int M){
	for(int i = 0; i < N; i++){
		for(int e = 0; e < M; e++){
			if(i == 0 || e == 0){
				v[i][e] = 0;
			}else{
				v[i][e] = -1;
			}
		}
	}
}

// Recursivo
int mochila(int N, int M, vector<int> p, vector<int> b){

	if(N == 0 || M == 0){
		return 0;
	}else if(N < 0 || M < 0){
                return -9999999;
        }
	
	if(v[N][M] != -1){
		return v[N][M];
	}

	if(p[N-1] > M){
		v[N][M] = mochila(N-1,M,p,b);
	}else{
		v[N][M] = max(mochila(N-1,M,p,b),b[N-1] + mochila(N-1,M-p[N-1],p,b));
	}


	return v[N][M];

}


// Iterativo
int mochila2(int N, int M, vector<int> p, vector<int> b) {
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (p[i - 1] > j) {
                v[i][j] = v[i - 1][j];
            } else {
                v[i][j] = max(v[i - 1][j], b[i - 1] + v[i - 1][j - p[i - 1]]);
            }
        }
    }

    return v[N][M];
}

void obtenerVec(int n,int m,vector<int> p){
	while(n!=0 && m!=0){
		if(v[n][m]>v[n-1][m]){
			res[n-1]=1;
			m-=p[n-1];
		}
		n--;
	}

}

int main(){
	
	vector<int> p1 = {1,3,2,4};
	vector<int> b1 = {10,20,15,20};
	rellenar(n1,m1);

	cout << mochila(n1-1,m1-1,p1,b1) << endl;

	cout << "Terminado" << endl;

	for(int i = 0; i < n1; i++){
                for(int e = 0; e < m1; e++){
                	cout << v[i][e] << "\t";
                }
		cout << endl;
        }

	obtenerVec(n1-1,m1-1,p1);
	cout << endl;
	for(int i = 0; i < n1-1; i++){
		cout << res[i] << "\t";
	}
	cout << endl;

	return 0;
}
