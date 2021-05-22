#include <stdio.h>

int main(void)
{
    int num, result, a, b, c, d;
    int cnt = 0;
    
    scanf("%d", &num);
    result = num;
    
    while(1)
    {
        a = num / 10;
        b = num % 10;
        c = (a + b) % 10;
        d = (b * 10) + c;
        num = d;
        cnt++;
        if(d == result)
            break;
    }
    printf("%d\n", cnt);
}
