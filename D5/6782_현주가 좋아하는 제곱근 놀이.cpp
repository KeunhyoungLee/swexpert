 /*
    N이 1일때 예외체크 해주고
    2일때까지 무한루프
    제곱근이 정수이면 그대로 루트 씌우고 카운팅
    정수가 아니면 (int)제곱근+1에서 제곱한 수(정수가 될때까지 더하기)에
    현재 N을 빼주어 더해지는 횟수 카운팅
    N을 제곱근이 될 수 있는 수로 바꿔준다.
    */
    
#include<iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
  int T;
  cin>>T;
  
	for(int test_case = 1; test_case <= T; ++test_case)
	{
    long long N;
		cin >> N;

		long long cnt = 0;
		while (N != 2) {
			long double n = sqrt(N);
			//예외처리 1일 때
			if (N == 1) {
				cnt++;
				break;
			}
			if (n == (int)n) {
				N = sqrt(N);
				cnt++;
			}
			else {
				cnt += pow((int)n + 1, 2) - N;
				N = pow((int)n + 1, 2);
			}
		}
		cout << "#" << test_case << " " << cnt;
		printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
