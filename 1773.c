#include <stdio.h>

int main(void) 
{
	int n, c, cycle, cnt = 0;
	int time[2000000] = { 0, };

	scanf("%d %d", &n, &c);

	for (int i = 0; i < n; i++) {
		scanf("%d", &cycle);
		for (int j = 1; cycle * j <= c; j++) {
			time[cycle * j] = 1;
		}
	}

	for (int i = 1; i <= c; i++) {
		if (time[i] == 1)
			cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}
