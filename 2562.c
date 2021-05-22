#include <stdio.h>

int main(void)
{
    int arr[9];
    
    int max = -1;
    for(int i = 0; i < 9; i++)
        scanf("%d", &arr[i]);
    
    int result = 0;
    for(int i = 0; i < 9; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
    printf("%d\n%d\n", max, result+1);
    return 0;
}
