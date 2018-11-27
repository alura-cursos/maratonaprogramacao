#include <iostream>
using namespace std;

//Fatorial de n:
//	n! = n*(n-1)! se n > 0 
//	do contrario: n! = 1


int fatorial(int n){
	if(n > 0){
		return n*fatorial(n-1);
	}
	else{
		return 1;
	}
}

int main (){
	int n;
	cin >> n;

	cout << fatorial(n) << endl;
}
