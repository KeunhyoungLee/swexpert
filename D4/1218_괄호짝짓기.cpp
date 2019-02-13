#include <iostream>
#include <string>
/*
스택과 벡터를 쓰려다
단순 변수로도 가능할 것 같아서 쓰지 않음

(), {}, [], <> 에 대한 카운팅 변수를 각각
a,b,c,d로 만들고 
string 변수에 부호를 입력받아서
하나씩 카운팅 해주면서 + 또는 - 시킴.
모두 0이 나오면 유효(1)
아니면 유효하지않음(0)
*/
using namespace std;

int main()
{
	for (int t = 1; t <= 10; t++) {
		int len;
		cin >> len;

		string s;
		cin >> s;
		
		int a = 0, b = 0, c = 0, d = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == '(')
				a++;
			else if (s[i] == ')')
				a--;
			else if (s[i] == '[')
				b++;
			else if (s[i] == ']')
				b--;
			else if (s[i] == '<')
				c++;
			else if (s[i] == '>')
				c--;
			else if (s[i] == '{')
				d++;
			else if (s[i] == '}')
				d--;
		}
		if (a == 0 && b == 0 && c == 0 && d == 0)
			printf("#%d 1\n", t);
		else
			printf("#%d 0\n", t);
	}
	return 0;
}
