/****************************************/
/* Aula 4 - Busca Binária               */
/* Soma das Casas - SPOJ BR             */
/* https://br.spoj.com/problems/SOMA12/ */
/****************************************/

#include <iostream>
using namespace std;

int s[100009];

int busca_valor(int de, int ate, int val){
	if(de == ate) 
		return de;
	
	int meio = (de + ate)/2;
	if(s[meio] < val)
		return busca_valor(meio+1, ate, val);
	else
		return busca_valor(de, meio, val);
}

int main (){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> s[i];
	int soma;
	cin >> soma;

	for(int i=0;i<n-1;i++){
		int j = busca_valor(i+1, n-1, soma - s[i]);
		if(s[i] + s[j] == soma){
			cout << s[i] << " " << s[j] << endl;
			break;
		}
	}
}

