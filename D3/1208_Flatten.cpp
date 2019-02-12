#include <iostream>
#include <algorithm>
#include <vector>
/*
벡터를 전역으로 선언해서...
틀렸던 문제
인덱스를 고려하지 않아도 되기때문에
정렬하고 제일 뒤의 벡터는 -1
제일 앞의 벡터는 +1
마지막에
맨뒤벡터-맨앞벡터를 하면
답이 됨.
*/
using namespace std;

int main()
{
	int T = 10;
	for (int t = 1; t <= T; t++) {
        vector<int> box;
		int dump;
		cin >> dump;
		for (int b = 0; b < 100; b++){
			int value;
            cin >> value;
            box.push_back(value);
        }
		for (int i = 0; i < dump; i++) {
			sort(box.begin(), box.end());
			box[99] -= 1;
			box[0] += 1;
		}
        sort(box.begin(), box.end());
		printf("#%d %d\n", t, box[99] - box[0]);
	}
    return 0;
}
