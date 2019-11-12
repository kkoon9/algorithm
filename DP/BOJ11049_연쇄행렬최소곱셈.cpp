#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1000 + 1;
int d[MAX];
int M[MAX][MAX];
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, input, j;
	cin >> N;

	for (int j = 0; j < N; j++) {
		if (j == 0)
			cin >> d[0] >> d[1];
		else
			cin >> input >> d[j + 1];
	}

	for (int diagonal = 0; diagonal < N; diagonal++)
	{
		for (int i = 1; i + diagonal <= N; i++)
		{
			j = i + diagonal;
			if (j == i)
			{
				M[i][j] = 0;
				continue;
			}
			M[i][j] = 2e9;
			for (int k = i; k <= j - 1; k++)
				M[i][j] = min(M[i][j], M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j]);
		}
	}
	cout << M[1][N] << endl;
	return 0;
}