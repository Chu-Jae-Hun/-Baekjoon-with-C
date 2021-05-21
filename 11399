#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	int arr[1000] = { 0, };

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
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

	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += arr[i] * (n - i);

	printf("%d\n", sum);

	return 0;
}
