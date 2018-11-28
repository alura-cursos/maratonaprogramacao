#include<iostream>
using namespace std;

bool ja_calculou[70];
long long F[70];

// memoização 

long long fibonacci(int n){
	if(ja_calculou[n]){
		return F[n];
	}

	ja_calculou[n] = true;
	if(n == 0){
		F[n] = 0;
	}
	else if(n == 1){
		F[n] = 1;
	}
	else {
		F[n] = fibonacci(n-1) + fibonacci(n-2);
	}
	return F[n];
}

int main (){
	int testes;
	cin >> testes;

	for(int teste=1;teste<=testes;teste++){
		int n;
		cin >> n;

		cout << "Fib(" << n << ") = " << fibonacci(n) << endl;
	}
}
