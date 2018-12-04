/**********************************************/
/* Aula 1 - Ad Hoc - Exercício Extra          */
/* Overflow - SPOJ BR                         */
/* https://br.spoj.com/problems/OVERF09/      */
/**********************************************/

#include <iostream>
using namespace std;

int main (){
	int n;
	cin >> n;

	int p, q;
	char c;
	cin >> p >> c >> q;
	
	int res = 0;

	if(c == '+')
		res = p + q;
	else
		res = p * q;
	
	if(res > n)
		cout << "OVERFLOW" << endl;
	else
		cout << "OK" << endl;
}
