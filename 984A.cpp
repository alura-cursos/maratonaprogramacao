/***************************************************/
/* Aula 2 - Ordenação                              */
/* Game - Codeforces                               */
/* https://codeforces.com/problemset/problem/984/A */
/***************************************************/

#include <iostream>
using namespace std;

int s[1009], n;

void selection_sort(){
	for(int i=0;i<n;i++){
		int menor = i;
		for(int j=i;j<n;j++){
			if(s[j] < s[menor])
				menor = j;
		}
		swap(s[menor], s[i]);
	}
}

int main (){
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> s[i];
	
	selection_sort();
	// sort(&s[0], &s[n]);

	printf("%d\n", s[(n-1)/2]);
}

