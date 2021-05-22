#include <stdio.h>

int main(void) 
{
	int arr[6];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (arr[j+1] < arr[j])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				for (int k = 0; k < 5; k++)
					printf("%d ", arr[k]);
				printf("\n");
			}
			else
				continue;
		}
	}
	return 0;
}
