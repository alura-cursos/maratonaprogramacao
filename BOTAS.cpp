#include <iostream>
using namespace std;

int cnt[70][2];

const int ESQ = 0, DIR = 1;


void limpa(){
	// Zera o numero de botas encontradas em outros testes do problema
	for(int tam=30;tam<=60;tam++){
		cnt[tam][ESQ] = 0;
		cnt[tam][DIR] = 0;
	}
}

int tipo(char pe){
	if(pe == 'E')
		return ESQ;
	else 
		return DIR;
}

int main (){
	int n;
	//  Coloca o cin dentro da condição do while para continuar lendo enquanto o arquivo da entrada não acaba,
	// como especificado no problema
	//  Podemos finalizar o programa enquanto testamos usando o comando Ctrl-D, ao invés do valor de n
	while(cin >> n){
		limpa();
		for(int i=0;i<n;i++){
			int tam;
			char pe;
			cin >> tam >> pe;
			cnt[tam][tipo(pe)]++;	
		}

		int npares = 0;
		for(int tam=30;tam<=60;tam++){
			npares += min(cnt[tam][ESQ], cnt[tam][DIR]);
		}
		cout << npares << endl;
	}
}

