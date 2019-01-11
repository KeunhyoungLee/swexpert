#include <iostream>

using namespace std;

int main()
{
	int T;
	
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;

		int score_cnt[101] = { 0 };//점수카운팅
		for (int j = 0; j < 1000; j++) {
			int score;//점수입력
			cin>>score;
			score_cnt[score]++;
		}
		
		int result = 0;
		int max_score_num = score_cnt[0];
		for (int j = 0; j < 101; j++) {
			if (max_score_num <= score_cnt[j]) {
				max_score_num = score_cnt[j];
				result = j;
			}
		}
        printf("#%d %d\n",i, result);
	}
	return 0;
}
