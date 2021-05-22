#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, cnt;
	
	scanf("%d", &n);

	if (n < 1 || n > 500)
		exit(1);
	
	cnt = 0;
	for (int i = 5; i <= n; i = i * 5)
		cnt += (n / i);

	if (n == 0) // 0!�� 0�� 1��
		printf("1\n");
	else
	    printf("%d\n", cnt);

	return 0;
}
