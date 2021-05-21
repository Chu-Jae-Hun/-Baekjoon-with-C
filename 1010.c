#include <stdio.h>

double permutate(int n, int m)
{
	double result = 1;
	for (double i = 0; i < n; i++)
	{
		result *= (m-i);
	}
	return result;
}

double factorial(int num)
{
	if (num < 1)
		return 1;
	else
		return (num * factorial(num - 1));
}

int main(void)
{
	int t, * n, * m;
	double result = 0;

	scanf("%d", &t);

	n = (int*)malloc(sizeof(int) * t);
	m = (int*)malloc(sizeof(int) * t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d%d", &n[i], &m[i]);
		printf("%.0lf\n", result = permutate(n[i], m[i]) / factorial(n[i]));
	}
}
