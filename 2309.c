#include <stdio.h>

int main(void)
{
	int arr[9], sum, no_1, no_2;

	sum = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				no_1 = i;
				no_2 = j;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (i != no_1 && i != no_2)
			printf("%d\n", arr[i]);
	}
	return 0;
}
