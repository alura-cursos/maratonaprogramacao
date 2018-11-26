#include <iostream>
#include <algorithm>
using namespace std;

int n;
int s[100009];

void le_entrada(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> s[i];
	}
}

void selection_sort(){
	for(int i=1;i<=n;i++){
		int menor = i;
		for(int j=i;j<=n;j++){
			if(s[j] < s[menor]){
				menor = j;
			}
		}
		swap(s[menor], s[i]);
	}
}

int main () {
	le_entrada();	

	//selection_sort();

	sort(&s[1], &s[n+1]);
	
	for(int i=1;i<=n;i++){
		cout << s[i] << " ";
	}
	cout << endl;
}
