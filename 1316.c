#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[101];
	int t, flag, cnt;

	scanf("%d", &t);

	cnt = 0;
	for (int i = 0; i < t; i++)
	{
		flag = 1;
		scanf("%s", str);
		for (int j = 0; j < str[j] != NULL; j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (str[j - 1] != str[j] && str[j] == str[k])
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1)
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
