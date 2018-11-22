#include <iostream>
using namespace std;

int main () {
	for(int teste=1;;teste++){
		int valor;
		cin >> valor;

		if(valor == 0){
			break;
		}

		cout << "Teste " << teste << endl;
		int notas[] = {50, 10, 5, 1};
		for(int i=0;i<4;i++){
			int quantidade_notas = valor/notas[i];
			valor = valor % notas[i];

			cout << quantidade_notas << " ";
		}
		cout << endl << endl;
	}
}
