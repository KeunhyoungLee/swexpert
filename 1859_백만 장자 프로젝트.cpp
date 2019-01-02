#include <iostream>

using namespace std;

int price[1000000] = { 0 };
int N;

int Max_index(int start);

int main()
{
	int T;
	
	scanf("%d", &T);
	for (int i =1; i <= T; i++){
		//int N;
        long long sum =0 ;
		//unsigned long long sum = 0;

		scanf("%d", &N);
		
		for (int j = 0; j < N; j++) {
			scanf("%d", &price[j]);
		}

		printf("#%d ", i);
		for (int j = 0; j < N; j++) {
			int max_index = Max_index(j);
			//printf("%d", max_index);
			for (int k = j; k <= max_index; k++){
				sum = sum + price[max_index] - price[k];
			}
			j = max_index;
		}
        printf("%lld\n", sum);
		//cout << sum << endl;
	}
    return 0;
}

int Max_index(int start) //start =j
{
	int max_value = 0;
	int max_index = 0;

	for (int i = start; i < N; i++) {
		if ( max_value < price[i] ) {
			max_value = price[i];
			max_index = i;
		}
	}
	return max_index;
}
