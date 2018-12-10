/***************************************************/
/* Aula 5 - PD - Exercicio Extra                   */
/* Cut Ribbon - Codeforces                         */
/* https://codeforces.com/problemset/problem/189/A */
/***************************************************/

#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 4009;

const int inf = 100000, NAO_CALC = -1;

int dp[MAXN];

int a, b, c;

int go(int n){
	// Ao inves de usar um vetor de booleanos "ja_calculou", podemos armazenar no vetor que faz a memoizacao um valor especifico que indica que ele nao foi calculado
	// No caso, armazenei NAO_CALC = -1 para dizer que um estado ainda nao havia sido calculado, dispensando assim a necessidade de se usar um vetor "ja_calculou"
	// Se o valor de dp[n] == -1, entao o valor ainda nao foi calculado
	// Do contrario, o valor ja foi calculado, e basta retornar dp[n]
	if(dp[n] != NAO_CALC)
		return dp[n];

	dp[n] = -inf;
	if(n >= a)
		dp[n] = max(dp[n], 1 + go(n-a));
	if(n >= b)
		dp[n] = max(dp[n], 1 + go(n-b));
	if(n >= c)
		dp[n] = max(dp[n], 1 + go(n-c));
	return dp[n];
}

int main (){
	int n;
	cin >> n >> a >> b >> c;
	// Preenche todas as posicoes do vetor dp com -1
	memset(dp, NAO_CALC, sizeof(dp));
	dp[0] = 0;
	cout << go(n) << endl;	
}

