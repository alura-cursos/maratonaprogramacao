/*******************************************************************************/
/* Aula 3 - Busca binária                                                      */
/* Array Subset of another array - GeeksForGeeks                               */
/* https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0 */
/*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 100009;

int m, n;
int s[MAXN], v[MAXN];

int busca_valor(int val, int de, int ate){
	if(de == ate)
		return de;
	if(de > ate)
		return m;
	int meio = (de + ate)/2;	
	if(s[meio] < val)
		return busca_valor(val, meio+1, ate);
	else
		return busca_valor(val, de, meio);
}

int main (){
	int ntestes;
	cin >> ntestes;
	for(int teste=1;teste <= ntestes;teste++){
		cin >> m >> n;
		for(int i=0;i<m;i++)
			cin >> s[i];

		int l = 0, r = m-1;
		bool ans = true;
		for(int i=0;i<n;i++)
			cin >> v[i];

		sort(&s[0], &s[m]);
		sort(&v[0], &v[n]);

		for(int i=0;i<n;i++){
			int pos = busca_valor(v[i], l, r);
			if(s[pos] != v[i])
				ans = false;
			l = pos + 1;
		}

		if(ans)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}

