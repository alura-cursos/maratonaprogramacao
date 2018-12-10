/*****************************************************/
/* Aula 3 - Recursão - Exercício Extra               */
/* F91 - SPOJ                                        */
/* https://br.spoj.com/problems/F91/                 */
/*****************************************************/

#include <iostream>
using namespace std;

int f(int n){
	if(n >= 101)
		return n - 10;
	else
		return f(f(n+11));
}

int main (){
	int n;
	cin >> n;
	while(n != 0){
		cout << "f91(" << n << ") = " << f(n) << endl;
		cin >> n;
	}
}

