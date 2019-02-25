#include <iostream>
#include <vector>

int visit[10001];

void init() {
	for (int i = 0; i < 10001; i++)
		visit[i] = 0;
	visit[0] = 1;
}

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		vector<int> score;
		int sum=0;
    init();
		for (int n = 0; n < N; n++) {
			int s;	cin >> s;	score.push_back(s);
			sum += s;
		}
		for (int i = 0; i < N; i++)
			for (int j = sum; j >= 0; j--)
				if (visit[j])
					visit[j + score[i]] = 1;

		int answer = 0;
		for (int i = 0; i <= sum; i++)
			if (visit[i])
				answer++;
		printf("#%d %d\n", t, answer);
	}
    return 0;
}
