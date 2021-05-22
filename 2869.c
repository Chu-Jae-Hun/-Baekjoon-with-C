#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;
	int num = 0;
	int dis = 0;

	scanf("%d %d %d", &a, &b, &c);
	dis = a - b;
	num = ((c-a) / dis)+1;
	if (((c-a)%(dis))>0) {
		num = num + 1;
	}
	printf("%d", num);
}
