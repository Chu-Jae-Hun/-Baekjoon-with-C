#include <stdio.h>

int main(void)
{
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    if(a <= 0 || b >= 10)
        exit(1);
    
    printf("%d", a+b);
    
    return 0;
}
