/*************************************************************************/
/* Aula 3 - Busca Binária                                                */
/* Find the Closest Number - Geeks for Geeks                             */
/* https://practice.geeksforgeeks.org/problems/find-the-closest-number/0 */
/*************************************************************************/

#include <iostream>
using namespace std;

int n, k, s[100009];

const int inf = 10000000;

void le_entrada(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	s[n] = inf;
}

void imprime_resposta(int i){
		if(k - s[i] < s[i+1] - k)
			cout << s[i] << endl;
		else
			cout << s[i+1] << endl;

}

int busca_valor(int valor, int de, int ate){
	if(de == ate)
		return de;		
		
	int meio = (de + ate + 1)/2;
	if(s[meio] <= valor)
		return busca_valor(valor, meio, ate);
	else
		return busca_valor(valor, de, meio-1);
}

int main (){
	int t;
	cin >> t;
	for(int teste = 0;teste < t;teste++){
		le_entrada();
		int pos = busca_valor(k, 0, n-1);
		imprime_resposta(pos);
	}
}

