#include <stdio.h>

int main(void) 
{
    int num, del;
    int j = 0;
    scanf("%d %d", &num, &del);
    int* arr = (int*)malloc(sizeof(int) * num);
    for (int i = 0; i < num; i++)
        arr[i] = 0;
    printf("<");
    for (int i = 0; i < num; i++){
        int cnt = 0;
        while (1){
            if (j == num)
                j = 0;
            if (arr[j] == 0)
                cnt++;
            if (cnt == del){
                arr[j] = 1;
                if (i == num - 1)
                    printf("%d>", j + 1);
                else
                    printf("%d, ", j + 1);
                break;
            }
            j++;
        }
    }
    return 0;
}
