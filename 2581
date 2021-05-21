#include <stdio.h>

int is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int m, n, sum, min;

	scanf("%d%d", &m, &n);
	
	sum = 0;
	min = n;
	for (int i = m; i <= n; i++)
	{
		if (is_prime(i) == 1 && i != 1)
		{
			sum += i;
			if (min > i && i != 1)
				min = i;
		}
	}
	if (sum == 0)
		printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
}
