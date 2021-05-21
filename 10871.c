#include <stdio.h>

int main() {

	int N = 0, X = 0, A[10000];
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) scanf("%d", &A[i]);
	for (int i = 0; i < N; i++) {
		if (X > A[i]) printf("%d ", A[i]);
	}
	
	return 0;
}
