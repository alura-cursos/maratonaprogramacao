/******************************************/
/* Aula 3 - Recursão - Exercício Extra    */
/* Torres de Hanói - SPOJ                 */
/* https://br.spoj.com/problems/OBIHANOI/ */
/******************************************/

#include <iostream>
using namespace std;

int hanoi(int n){
	if(n == 1)
		return 1;
	return 2*hanoi(n-1) + 1;
}

int main (){
	int n, teste = 1;
	cin >> n;	
	while(n > 0){
		cout << "Teste " << teste << endl;
		cout << hanoi(n) << endl << endl;
		teste++;
		cin >> n;	
	}
	
}

