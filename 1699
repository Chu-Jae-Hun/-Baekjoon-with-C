#include <stdio.h>

int main(void)
{
	int n, arr[1000] = {0, };
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if ((arr[i] > arr[i - j * j] + 1) || arr[i] == 0)
				arr[i] = arr[i - j * j] + 1;
		}
	}

	printf("%d\n", arr[n]);
	return 0;
}
