#include <stdio.h>

int main(void) 
{
    int M, N;
    int arr[1000001] = { 1,1 };
    
    for (int i = 2; i*i < 1000001; i++) 
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j < 1000001; j += i)
                arr[j] = 1;
        }
    }
    scanf("%d %d", &M, &N);

    for (int i = M; i <= N; i++)
    {
        if (arr[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}
