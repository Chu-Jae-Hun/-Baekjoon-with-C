#include <stdio.h>

int main(void)
{
	int n, m, cnt, a, b;
	int bef[51][51];
	int aft[51][51];

	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%d", &bef[i][j]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%d", &aft[i][j]);
	}

	a = 0;
	b = 3;
	cnt = 0;
	for (int i = a; i < b; i++)
	{
		for (int j = a; j < b; j++)
		{
			if (bef[i][j] == 0)
				bef[i][j] = 1;
			else
				bef[i][j] = 0;
		}
		a++;
		b++;
		cnt++;
		if (a > (n / 3) + (n % 3) && b > (m / 3) + (m % 3))
			break;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (bef[i][j] != aft[i][j])
				cnt = -1;
		}
	}

	printf("%d", cnt);
}
