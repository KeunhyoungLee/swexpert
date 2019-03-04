#include <iostream>
#include <vector>

using namespace std;

int T, N, P;
//int node[500][500];
int A[500];
int B[500];
int S[500];
vector<int> ans;

void init() {
	for (int i = 0; i < 500; i++) {
		A[i] = 0; B[i] = 0; S[i] = 0;
	}
}

int main()
{
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> A[i] >> B[i];

		cin >> P;
		for (int i = 0; i < P; i++)
			cin >> S[i];
		
		for (int i = 0; i < P; i++) {
			int tmp=0;
			for (int j = 0; j < N; j++) {
				if (A[j] <= S[i] && B[j] >= S[i])
					tmp++;
			}
			ans.push_back(tmp);
		}
		
		printf("#%d ", t);
		for (int i = 0; i < ans.size(); i++)
			printf("%d ", ans[i]);
		printf("\n");

		init();
		ans.clear();
	}	
}
