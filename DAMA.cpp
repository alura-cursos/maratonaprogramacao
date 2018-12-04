#include <iostream>
using namespace std;

bool igual(int a, int b, int aa, int bb){
	return (a == aa && b == bb);
}

bool mesma_linha(int x, int y, int xx, int yy){
	return (x == xx || y == yy);
}
 
bool mesma_diagonal(int x, int y, int xx, int yy){
	return (x - y == xx - yy || x + y == xx + yy);
}

int main (){
	for(int teste=1;;teste++){
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
			break;

		if(igual(x1, y1, x2, y2))
			cout << 0 << endl;
		else if(mesma_linha(x1, y1, x2, y2)	|| mesma_diagonal(x1, y1, x2, y2))
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
}

