#include <iostream>
#include <queue>
/*
0을 제외한 모든 수를 큐에 저장하고
인접인덱스의 두 값이 같으면 더하고
아니면 그대로 배열에 저장
*/
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		char op[5];
		cin >> op;
		int map[20][20] = { 0 };
		int answer[20][20] = { 0 };
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				int tmp;
				cin >> tmp;
				map[i][j]=tmp;
			}
		}
		queue<int> q;
		if (op[0] == 'u') {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (map[j][i] != 0)
						q.push(map[j][i]);
				}
				//해당 열 하나씩 큐에 담음
				int idx = 0;
				while (1) {
					int num1 = 0, num2 = 0;
					//큐가 비어있지 않을때 두 수를 비교해서
					//같으면 더하고 다르면 그대로 저장
					if (!q.empty()) {
						num1 = q.front();
						q.pop();
					}
					else
						break;

					if (!q.empty()) {
						num2 = q.front();
						//q.pop();
					}
					if (num1 == num2) {
						answer[idx][i] = num1 + num2;
						q.pop();
					}
					else
						answer[idx][i] = num1;
					/*else if (num2 == 0) {
						answer[idx][i] = num1;
					}
					else {
						answer[idx][i] = num1;
						answer[++idx][i] = num2;
					}*/
					idx++;
				}
			}
		}
		else if (op[0] == 'd') {
			for (int i = 0; i < N; i++) {
				for (int j = N - 1; j >= 0; j--) {
					if (map[j][i] != 0) q.push(map[j][i]);
				}
				int idx = N - 1;
				while (1) {
					int num1 = 0, num2 = 0;
					if (!q.empty()) {
						num1 = q.front();
						q.pop();
					}
					else
						break;
					if (!q.empty()) {
						num2 = q.front();
						//q.pop();
					}
					if (num1 == num2) {
						answer[idx][i] = num1 + num2;
						q.pop();
					}
					else
						answer[idx][i] = num1;
					//else if (num2 == 0)
					//	answer[idx][i] = num1;
					//else {
					//	answer[idx][i] = num1;
					//	//answer[--idx][i] = num2;
					//}
					idx--;
				}
			}
		}
		else if (op[0] == 'l') {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (map[i][j] != 0) q.push(map[i][j]);
				}
				int idx = 0;
				while (1) {
					int num1 = 0, num2 = 0;
					if (!q.empty()) {
						num1 = q.front();
						q.pop();
					}
					else
						break;
					if (!q.empty()) {
						num2 = q.front();
					//	q.pop();
					}
					if (num1 == num2) {
						answer[i][idx] = num1 + num2;
						q.pop();
					}
					else
						answer[i][idx] = num1;
					/*else if (num2 == 0)
						answer[i][idx] = num1;
					else {
						answer[i][idx] = num1;
						answer[i][++idx] = num2;
					}*/
					idx++;
				}
			}
		}
		else{
			for (int i = 0; i < N; i++) {
				for (int j = N-1; j >= 0; j--) {
					if (map[i][j] != 0) q.push(map[i][j]);
				}
				int idx = N-1;
				while (1) {
					int num1 = 0, num2 = 0;
					if (!q.empty()) {
						num1 = q.front();
						q.pop();
					}
					else
						break;
					if (!q.empty()) {
						num2 = q.front();
						//q.pop();
					}
					if (num1 == num2) {
						answer[i][idx] = num1 + num2;
						q.pop();
					}
					else
						answer[i][idx] = num1;
					/*else if (num2 == 0)
						answer[i][idx] = num1;
					else {
						answer[i][idx] = num1;
						answer[i][--idx] = num2;
					}*/
					idx--;
				}
			}
		}
		
		printf("#%d\n", t);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				printf("%d ", answer[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}
