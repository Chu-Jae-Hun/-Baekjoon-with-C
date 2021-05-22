#include <stdio.h>

int main(void) 
{
	int n, k, country, gold, silver, bronze, rank;
	
	scanf("%d%d", &n, &k); 
	
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 1; i <= n; i++) 
	{
		scanf("%d%d%d%d", &country, &gold, &silver, &bronze);
		arr[country] = gold * 1e5 + silver * 1e3 + bronze;
	}

	rank = 1;
	for (int j = 1; j <= n; j++) 
	{
		if (arr[j] > arr[k])
			rank++;
	}

	printf("%d\n", rank);
	return 0;
}
