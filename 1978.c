#include <stdio.h>

int prime(int n)
{
	if (n == 1)
		return 0;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n, *num, cnt;

	scanf("%d", &n);

	if (n > 100)
		exit(1);

	num = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (prime(num[i]) == 1)
			cnt++;
	}

	printf("%d\n", cnt);
}
