#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100000

typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
}StackType;

void init_stack(StackType* s)
{
    s->top = -1;
}

void push(StackType* s, element item)
{
    s->data[++(s->top)] = item;
}

void pop(StackType* s)
{
    s->data[(s->top)--];
}

int main(void)
{
    StackType s;
    char* result;
    int* arr;
    int n, num = 1, idx = 0, result_idx = 0;

    scanf("%d", &n);
    result = (char*)malloc(sizeof(char) * (n * 2));
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    init_stack(&s);

    for (int i = 0; i < n * 2; i++)
    {
        if (s.top == -1 || s.data[s.top] < arr[idx])
        {
            push(&s, num++);
            result[result_idx++] = '+';
        }
        else if (s.data[s.top] == arr[idx])
        {
            pop(&s);
            result[result_idx++] = '-';
            idx++;
        }
    }
    if (s.top == -1)
    {
        for (int i = 0; i < result_idx; i++)
            printf("%c\n", result[i]);
    }
    else
        printf("NO\n");

    free(result);
    free(arr);
}
