#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, cnt, result;

	scanf("%d", &n);

	char* arr = (char*)malloc(sizeof(char) * n);

	for (int i = 0; i < n; i++)
	{
		scanf(" %c", &arr[i]);
	}

	cnt = 0;
	result = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 'L')
		{
			result++;
			i++;
		}
		else if(arr[i] == 'S')
		{
			result++;
		}
	}

	if (result > n)
		result = n;

	printf("%d\n", result);
	return 0;
}
