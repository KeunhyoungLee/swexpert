#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++) {
		int T;
		cin >> T;

		string check_word;
		string word;

		cin >> check_word;
		cin >> word;

		int count = 0;

		for (int j = 0; j <= word.length() - check_word.length(); j++) {
			int tmp = j;
			for (int k = 0; k < check_word.length(); k++) {
				//int tmp = i;
				if (word[tmp] != check_word[k]) {
					break;
				}
				else {
					tmp++;
					if (k == check_word.length() - 1) {
						count++;
						break;
					}
				}
			}
		}
		printf("#%d %d\n", T, count);
	}
	return 0;
}
