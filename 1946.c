#include <stdio.h>

int main(void)
{
	int t, n, doc, inter, cnt;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		cnt = 0;
		scanf("%d", &n);
	    int arr[100001] = { 0, };
		for (int j = 1; j <= n; j++)
		{
			scanf("%d%d", &doc, &inter);
			arr[doc] = inter;
		}

		int min = arr[1];

		for (int j = 1; j <= n + 1; j++)
		{
			if (arr[j] < min) {
				min = arr[j];
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
