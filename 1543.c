#include <stdio.h>
#include <string.h>

int main(void)
{
	char *arr = (char *)malloc(sizeof(char)* 2501);
	char *find = (char*)malloc(sizeof(char) * 51);
	int cnt, flag;

	gets(arr);
	gets(find);

	int arr_len = strlen(arr);
	int find_len = strlen(find);

	cnt = 0;
	for (int i = 0; i < arr_len - find_len + 1; i++)
	{
		flag = 1;
		for (int j = 0; j < find_len; j++)
		{
			if (arr[i + j] != find[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cnt++;
			i += find_len - 1;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
