/***************************************/
/* Aula 3 - Recursão - Exercício Extra */
/* O problema 3n + 1                   */
/* http://www.codcad.com/problem/41    */
/***************************************/

#include <iostream>
using namespace std;

int f(int x){
	if(x == 1) return 0;
	if(x%2 == 0) 
		return 1 + f(x/2);
	else
		return 1 + f(3*x + 1);
}

int main (){
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}

