#include <iostream>
#include <vector>
#include <string>

/*
카드를 반반 나누어 입력받는다.
카드 갯수가 홀수 일 때와 짝수 일 때를 고려하여

나누어 받은 카드를 하나씩 합치면 끝
*/
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int N;
		cin >> N;
		vector<string> v_1, v_2;
		vector<string> answer;
		int n;
		if (N % 2 == 0)
			n = N / 2;
		else
			n = N / 2 + 1;

		string tmp;
		for (int i = 0; i < n; i++) {
			
			cin >> tmp;
			v_1.push_back(tmp);
		}
		for (int i = n; i < N; i++) {
			cin >> tmp;
			v_2.push_back(tmp);
		}

		for (int j = 0; j < N / 2; j++) {
			answer.push_back(v_1[j]);
			answer.push_back(v_2[j]);
		}
		if (N % 2 != 0)
			answer.push_back(v_1.back());

		printf("#%d ", t);
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << " ";
		}
		printf("\n");
	}
	return 0;
}
