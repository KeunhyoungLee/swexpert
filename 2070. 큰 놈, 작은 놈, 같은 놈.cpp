#include <stdio.h>

int main()
{
	int T;
	int a, b;

	scanf("%d", &T);

	for (int i =1; i <= T; i++)
	{
		scanf("%d %d", &a, &b);
		printf("#%d ", i);
		if (a < b)
			printf("<");
		else if (a == b)
			printf("=");
		else
			printf(">");
		printf("\n");
	}
    return 0;
}
