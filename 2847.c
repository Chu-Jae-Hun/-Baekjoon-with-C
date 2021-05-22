#include <stdio.h>

int main(void)
{
	int n, * arr, cnt;
	scanf("%d", &n);
	
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		while (arr[i - 1] >= arr[i])
		{
			arr[i - 1]--;
			cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}
