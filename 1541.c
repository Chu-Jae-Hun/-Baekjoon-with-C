#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    char str[51];
    int arr[51] = { 0 };
    int len = strlen(str);
    int j = 0, k = 0, temp = 0, sum = 0, result = 0;
    
    scanf("%s", str);

    for (int i = 0; i <= len; i++) {
        if (str[i] == '-' || i == len) {
            sum += temp;
            arr[j] = sum;
            j++;
            temp = 0;
            sum = 0;
        }
        else if (str[i] == '+') {
            sum += temp;
            temp = 0;
        }
        else {
            temp *= 10;
            temp = temp + str[i] - '0';
        }
    }
    result = arr[0];

    for (int i = 1; i < j; i++)
        result = result - arr[i];

    printf("%d\n", result);
    
    return 0;
}
