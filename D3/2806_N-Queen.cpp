#include <iostream>

using namespace std;
/*
퀸의 위치를 1,1에 놓고 답을 다 구하고
1열에서 시작하는 퀸은 정답 다 구햇으니 1,2에 놓고 답을 구함
*/
int board[10] = { 0 };
int cnt;
int N;

void init() {
	for (int i = 0; i < 10; i++)
		board[i] = 0;
}

bool check(int row) {
	//i는 0행부터 마지막 퀸이 위치한 곳의 윗 행까지
	//같은 열에 있거나 또는 대각선에 위치한다면
	for (int i = 0; i < row; i++) {
		if (board[row] == board[i] || row - i == abs(board[row] - board[i])) {
			return false;
		}
	}
	return true;
}

void dfs(int row) {
	if (row == N) {
		cnt++;
		return;		
	}
	//첫번째 행에 놓이는 퀸의 위치를 i가 정함
	for (int i = 0; i < N; i++) {//i: 열의 위치 
		board[row] = i;
		if (check(row)) //참이면(퀸 놓을 수 있으면)
			dfs(row + 1);
		//board[row] = 0;//통과한거 다 끝나면
	}
}
int main() {
	int T;
	cin >>T;

	for (int t = 1; t <= T; t++) {
		init();
		cnt = 0;
		cin>>N;
		dfs(0);

		printf("#%d %d\n", t, cnt);
	}
	return 0;
}
