#include <stdio.h> 

int main(void)
{
	int n, buf; 
	long long dp[101] = { 0, 1, 1, 1 }; 
  
	for (int i = 4; i < 101; i++) 
		dp[i] = dp[i - 2] + dp[i - 3]; 
	
  scanf("%d", & n); 
	for (int i = 0; i < n; i++) 
	{ 
		scanf("%d", & buf); 
		printf("%lld\n", dp[buf]); 
	} 
	return 0; 
}
