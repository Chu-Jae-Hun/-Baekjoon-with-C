#include <stdio.h>

int main() 
{
	int cash, sum=0;
	scanf("%d", &cash);
    
	cash = 1000 - cash;
    
	if (cash >= 500) {
		sum += cash / 500;
		cash %= 500;
	}
    
	if (cash >= 100) {
		sum += cash / 100;
		cash %= 100;
	}
    
	if (cash >= 50) {
		sum += cash / 50;
		cash %= 50;
	}
    
	if (cash >= 10) {
		sum += cash / 10;
		cash %= 10;
	}
	if (cash >= 5) {
		sum += cash / 5;
		cash %= 5;
	}
	sum += cash;
	printf("%d\n", sum);
}
