/**********************************************/
/* Aula 1 - Ad Hoc - Exercício Extra          */
/* Life, the Universe, and Everything - SPOJ  */
/* https://www.spoj.com/problems/TEST/        */
/**********************************************/

#include <iostream>
using namespace std;

int main (){
	bool leu42 = false;

	while(!leu42){
		int numero;
		cin >> numero;

		if(numero == 42){
			leu42 = true;
		}
		else{
			cout << numero << endl;
		}
	}
}

