/*****************************************/
/* Aula 4 - Busca Binaria                */
/* Pao a metro - SPOJ BR                 */
/* https://br.spoj.com/problems/PAO07/   */
/*****************************************/


#include <iostream>
using namespace std;

const int MAXN = 10009;

int n, k;
int tam[MAXN];

// Retorna a quantidade de lanches que podemos formar de tamanho tam_lanche
int num_lanches(int tam_lanche){
	int qtd = 0;
	for(int i=0;i<k;i++)
		qtd += tam[i]/tam_lanche;

	return qtd;
}

int busca_tam(int de, int ate){
	if(de == ate) 
		return de;
	int meio = (de + ate + 1)/2;
	// Faz a busca binária no tamanho de pão que cada pessoa receberá
	// A verificação a seguir deve dizer se é possível distribuir um pedaço de tamanho "meio" para as "n" pessoas 
	if(num_lanches(meio) >= n)
		return busca_tam(meio, ate);
	else
		return busca_tam(de, meio-1);
}

int main (){
	cin >> n >> k;
	for(int i=0;i<k;i++){
		cin >> tam[i];
	}

	cout << busca_tam(1, 10000) << endl;
}

