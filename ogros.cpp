/**************************************************************/
/* Aula 4 - Busca Binária                                     */
/* Ogros - OBI                                                */
/* https://olimpiada.ic.unicamp.br/pratique/p2/2008/f1/ogros/ */
/**************************************************************/

#include <iostream>
using namespace std;

const int MAXN = 10009;

const int inf = 2000000000;

int A[MAXN], F[MAXN], O[MAXN];

int busca_valor(int de, int ate, int val){
	if(de == ate)
		return de;
	
	int meio = (de + ate)/2;
	if(A[meio] <= val)
		return busca_valor(meio+1, ate, val);
	else 
		return busca_valor(de, meio, val);
}

int main (){
	int n, m;
	cin >> n >> m;
	for(int a=0;a<n-1;a++)
		cin >> A[a];
	A[n-1] = inf;
	for(int a=0;a<n;a++)
		cin >> F[a];
	for(int a=0;a<m;a++){
		cin >> O[a];

		int pos = busca_valor(0, n-1, O[a]);
		cout << F[pos] << " ";
	}
	cout << endl;
}

