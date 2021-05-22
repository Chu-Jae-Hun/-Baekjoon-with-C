#include <stdio.h>
#define SIZE 1000001

int main(void)
{
	int n;
	int arr[SIZE] = { 0, 0};
	
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0)
		{
			if (arr[i / 2] + 1 < arr[i])
				arr[i] = arr[i / 2] + 1;
		}
		if (i % 3 == 0)
		{
			if (arr[i / 3] + 1 < arr[i])
				arr[i] = arr[i / 3] + 1;
		}
	}
	printf("%d\n", arr[n]);
	return 0;
}
