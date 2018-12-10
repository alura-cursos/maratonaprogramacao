/*******************************************************************************/
/* Aula 3 - Recursão - Exercício Extra                                         */
/* Repetitive Addition Of Digits  - Geeks for Geeks                            */
/* https://practice.geeksforgeeks.org/problems/repetitive-addition-of-digits/0 */
/*******************************************************************************/

#include <iostream>
using namespace std;

int somadig(int n){
	int soma = 0;
	while(n > 0){
		soma += n%10;
		n = n/10;
	}
	return soma;
}

int resolve(int n){
	if(n >= 10) 
		return resolve(somadig(n));
	else
		return n;
}

int main (){
	int t;
	scanf("%d", &t);
	for(int teste = 1;teste <= t;teste++){
		int n;
		scanf("%d", &n);
		while(n >= 10){
			n = somadig(n);
		}
		printf("%d\n", n);
	}
}

