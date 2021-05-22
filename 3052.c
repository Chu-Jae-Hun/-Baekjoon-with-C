#include <stdio.h>

int main(void) 
{
    int arr[10];
    int count = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % 42;
    }
    for(int i = 0; i < 10; i++){
        int a = 0; 
        for(int j = 0; j < i; j++) { 
            if(arr[i] == arr[j])
                a++; 
        }
        if(a == 0)
            count++;
    }
    printf("%d", count);
    return 0;
}
