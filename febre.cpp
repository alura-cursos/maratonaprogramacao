/************************************/
/* Aula 5 - PD - Exercício Extra    */
/* Febre de Recursoes - CodCad      */
/* http://www.codcad.com/problem/75 */
/************************************/

#include <iostream>
#include <cstring>
using namespace std;

const int NAO_CALC = -1000009;
const int MAXN = 1009;

long long f[MAXN], a[MAXN];

int n, m;

long long calcf(int k){
	if(f[k] == NAO_CALC){
		long long soma = 0;
		for(int i=1;i<=n;i++){	
			soma = (soma + a[i]*calcf(k-i)) % m;
		}
		f[k] = soma;
	}
	return f[k];
}

int main (){
	int k;
	cin >> n >> k >> m;

	memset(f, NAO_CALC, sizeof(f));
	for(int i=1;i<=n;i++)
		cin >> a[i];
	for(int i=1;i<=n;i++)
		cin >> f[i];

	cout << calcf(k) << endl;
}

