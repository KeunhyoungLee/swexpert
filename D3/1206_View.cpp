#include <iostream>
#include <algorithm>
#include <vector>
/*
높이를 벡터에 받은 다음
해당 인덱스보다 -2, -1, +1, +2 인 높이가 높으면
확보되지 않은 것이므로 continue
아닌 경우에는 현재 인덱스에
위 4개의 높이 중 제일 높은 값을
빼주면 조망권이 확보된 세대수가 나온다.
*/
using namespace std;

int main()
{
	for (int t = 1; t <= 10; t++) {
		int tc;
		cin >> tc;
		vector<int> building;

		for (int i = 0; i < tc; i++) {
			int tmp;
			cin >> tmp;
			building.push_back(tmp);
		}
		int cnt = 0;

		for (int i = 2; i < tc-2; i++) {
			if (building[i - 2] >= building[i] || building[i - 1] >= building[i] || building[i + 1] >= building[i] || building[i + 2] >= building[i])
				continue;
			else {
				vector<int> tmp;
				tmp.push_back(building[i - 2]); tmp.push_back(building[i - 1]); tmp.push_back(building[i + 1]); tmp.push_back(building[i + 2]);
				sort(tmp.begin(), tmp.end());
				cnt += building[i] - tmp[3];
			}
		}
		printf("#%d %d\n", t, cnt);
	}
    return 0;
}
