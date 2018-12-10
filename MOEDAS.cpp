/****************************************/
/* Aula 5 - PD - Exercício Extra        */
/* Moedas - SPOJ                        */
/* https://br.spoj.com/problems/MOEDAS/ */
/****************************************/



#include <iostream>
using namespace std;

const int NAO_CALC = -1;

const int MAXN = 109, MAXM = 50009;
const int INF = 100000;

int men[MAXM];

int n, v[MAXN];

int calc(int m){
	if(men[m] == NAO_CALC){
		men[m] = INF;
		for(int i=0;i<n;i++){
			if(v[i] <= m){
				men[m] = min(men[m], calc(m-v[i]) + 1);	
			}
		}
	}
	return men[m];
}

int main (){
	int m;
	cin >> m;

	while(m > 0){
		cin >> n;

		for(int i=0;i<=m;i++)
			men[i] = NAO_CALC;

		men[0] = 0;

		for(int i=0;i<n;i++)
			cin >> v[i];

		int ans = calc(m);
		if(ans == INF)
			cout << "Impossivel" << endl;
		else
			cout << calc(m) << endl;
		
		cin >> m;
	}
}

