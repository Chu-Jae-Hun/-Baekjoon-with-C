#include <stdio.h>

int main(void)
{
	int n, sum;

	scanf("%d", &n);

	sum = 1;
	for (int i = 0; i < n; i++) 
	{
		sum += 6 * i;
		if (sum >= n)
		{
			printf("%d\n", i + 1);
			break;
		}
	}
	return 0;
}
