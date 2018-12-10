/*************************************/
/* Aula 2 - Ordenação                */
/* Casa das cartas - CodCad          */
/* http://www.codcad.com/problem/47  */
/*************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int s[100009];

bool cmp(int i, int j){
	// A função de comparação define como deve ser feita a ordenação do vetor analisado
	// Como queremos ordenar os valores de acordo com o resto da divisão por m, do maior pro menor, então precisamos fazer a seguinte comparação:
	return ((i%m) > (j%m) || ((i%m) == (j%m) && i > j));
	// Basicamente, assim definimos que para dois elementos da sequencia, i e j, sendo i um elemento que vem antes de j, deve valer que (i%m) seja maior que (j%m).
	// Se o valor que o vampirao recebera é o mesmo ((i%m) == (j%m)), então o desempate da ordenação se faz pela propina de maior valor,com a qual os deputados ganham mais
}

int main (){
	cin >> n >> m;

	for(int i=0;i<n;i++)
		cin >> s[i];	

	// Podemos resolver esse problema mais facilmente definindo uma funcao de comparacao "cmp", que definimos antes de main.
	sort(&s[0], &s[n], cmp);

	for(int i=0;i<n;i++)
		cout << s[i] << " ";
	cout << endl;
}

