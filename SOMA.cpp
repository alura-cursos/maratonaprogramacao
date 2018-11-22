#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;

	int soma = 0;
	for(int i=1;i<=n;i++){
		int x;
		cin >> x;

		soma += x;
	}

	cout << soma << endl;
}
