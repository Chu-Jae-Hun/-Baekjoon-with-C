#include <stdio.h>

int gcm(int a, int b)
{
	while (b != 0)
	{
		int temp;
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main(void)
{
	int a, b, result;
	scanf("%d%d", &a, &b);

	result = gcm(a, b);

	printf("%d\n", result);
	printf("%d\n", a * b / result);
	return 0;
}
