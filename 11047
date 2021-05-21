#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k, cnt;

	scanf("%d%d", &n, &k);

	if (n < 1 || n > 10)
		exit(1);

	int* money = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &money[i]);

	cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		while (1)
		{
			if (money[i] <= k)
			{
				k -= money[i];
				cnt++;
			}
			else
				break;
		}
	}

	printf("%d\n", cnt);

	return 0;
}
