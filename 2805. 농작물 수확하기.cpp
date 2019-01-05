#include <iostream>

using namespace std;

int main()
{
	int T;
	
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;
		int sum = 0;
		int N_value[50][50];
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				scanf("%1d", &N_value[j][k]);
			}
		}
		int divide = (N - 1) / 2;
		for (int j = 0; j <= divide;j++)
			for (int k = divide - j; k <= divide + j; k++)
				sum += N_value[j][k];

		for (int j = divide + 1; j < N; j++)
			for (int k = j - divide; k < N - (j - divide); k++)
				sum += N_value[j][k];

		printf("#%d %d\n", i, sum);
	}
	return 0;
}
