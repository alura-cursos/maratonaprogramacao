/**********************************************/
/* Aula 1 - Ad Hoc - Exercício Extra          */
/* Par ou Impar - SPOJ BR                     */
/* https://br.spoj.com/problems/PAR/          */
/**********************************************/

#include <iostream>
using namespace std;

bool par(int x){
	return (x%2 == 0);
}

int main (){
	for(int teste=1;;teste++){
		int n;
		cin >> n;

		if(n == 0)
			break;

		string A, B;
		cin >> A >> B;

		cout << "Teste " << teste << endl;
		for(int i=0;i<n;i++){
			int a, b;
			cin >> a >> b;
			if(par(a+b))
				cout << A << endl;
			else
				cout << B << endl;
		}
		cout << endl;
	}
}

