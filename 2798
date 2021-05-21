#include <stdio.h>
#include <stdlib.h>
#define INDEX 100

int main(void)
{
	int N, M;
	int sum = 0;
	int max = 0;
	int arr[INDEX] = { 0, };

	scanf("%d%d", &N, &M);

	if (N < 3 || N > 100)
		return 0;

	if (M < 10 || M > 300001)
		return 0;

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum > max && sum <= M)
					max = sum;
			}
		}
	}

	printf("%d", max);

	return 0;
}
