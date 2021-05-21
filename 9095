#include <stdio.h>

int problem(int num)
{
	int f[12] = { 0, 1, 2, 4 };

	for (int i = 4; i < 12; i++)
		f[i] = f[i - 3] + f[i - 2] + f[i - 1];

	return f[num];
}

int main(void)
{
	int t, arr[12];

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < t; i++)
		printf("%d\n", problem(arr[i]));
	
	return 0;
}
