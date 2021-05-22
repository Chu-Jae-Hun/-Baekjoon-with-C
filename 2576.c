#include <stdio.h>

int main(void)
{
	int num[7], sum, min;

	sum = 0;
	min = 100;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] % 2 != 0)
		{
			sum += num[i];
			if (num[i] < min)
				min = num[i];
		}
	}
	if (sum == 0)
	{
		printf("-1");
		return 0;
	}

	printf("%d\n", sum);
	printf("%d\n", min);

	return 0;
}
