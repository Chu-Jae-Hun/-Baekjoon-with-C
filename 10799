#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[100001];
	int len, cnt, result;

	scanf("%s", str);

	len = strlen(str);

	cnt = 0;
	result = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
			cnt++;
		else 
		{
			cnt--;
			if (str[i - 1] == '(')
				result += cnt;
			else 
				result++;
		}
	}
	printf("%d\n", result);
	
	return 0;
}
