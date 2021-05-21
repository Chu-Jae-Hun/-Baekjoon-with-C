#include <stdio.h>
#include <math.h>

void hanoi_tower(int n, int from, int tmp, int to)
{
    if(n == 1)
    {
        printf("%d %d\n", from, to);
        return;
    }
    else
    {
        hanoi_tower(n-1, from, to, tmp);
        hanoi_tower(1, from, tmp, to);
        hanoi_tower(n-1, tmp, from, to);
    }
}

int main(void)
{
    int n, cnt;
    scanf("%d", &n);

    cnt = pow(2, n) - 1;
    printf("%d\n", cnt);
    hanoi_tower(n, 1, 2, 3);
    return 0;
}
