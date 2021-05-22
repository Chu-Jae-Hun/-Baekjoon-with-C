#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[6];
	while (1) 
	{
		scanf("%s", arr);
		if (arr[0] == '0')
			break;

		int len = strlen(arr);
		
		if (len == 1)
		{
			printf("yes\n");
		}

		for (int i = 0; i < len/2; i++)
		{
			if (arr[i] != arr[len - i - 1])
			{
				printf("no\n");
				break;
			}
			else
			{
				if (arr[i + 1] == arr[len - i - 2])
				{
					printf("yes\n");
					break;
				}
				else
				{
					printf("no\n");
					break;
				}
			}
		}
	}
	return 0;
}
