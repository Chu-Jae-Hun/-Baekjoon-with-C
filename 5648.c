#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	long long result;
	long long* arr;

	scanf("%lld", &n);

	arr = (long long*)malloc(n * sizeof(long long));

	for (int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);

	for (int i = 0; i < n; i++)
	{
		result = 0;
		while (arr[i] > 0)
		{
			result = result * 10 + arr[i] % 10; 
			arr[i] /= 10;
		}
		arr[i] = result;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j]) 
			{
				long long temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%lld\n", arr[i]);

	return 0;
}
