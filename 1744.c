#include <stdio.h>

int N;
int arr[10000];

int main(void)
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
        {
            int temp;
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

	int sum = 0;
	for (int i = 0; i < N; i++)
    {
		if (arr[i] < 0)
        {
			int tmp = arr[i];
			if (i+1 < N && arr[i+1] <= 0) 
                tmp *= arr[++i];
			sum += tmp;
		}
		else 
            break;
	}

	for (int j = N-1; j >= 0; j--)
    {
		if (arr[j] > 1)
        {
			int tmp = arr[j];
			if (j-1 >= 0 && arr[j-1] > 1)
                tmp *= arr[--j];
			sum += tmp;
		}	
		else if (arr[j] == 1) sum += 1;
		else 
            break;
	}

	printf("%d\n", sum);
	return 0;
}
