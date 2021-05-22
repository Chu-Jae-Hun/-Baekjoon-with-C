#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef struct StackType {
    int data[MAX_STACK_SIZE];
    int top;
}StackType;

void init_stack(StackType* s)
{
    s->top = -1;
}

int is_empty(StackType* s)
{
    if (s->top == -1)
        return 1;
    return 0;
}

int is_full(StackType* s)
{
    if (s->top == (MAX_STACK_SIZE - 1))
        return 1;
    return 0;
}

void push(StackType* s, int value)
{
    s->data[++(s->top)] = value;
}

int pop(StackType* s)
{
    if (is_empty(s))
        exit(1);
    return s->data[(s->top)--];
}

int peek(StackType* s)
{
    if (is_empty(s))
        exit(1);

    return s->data[s->top];
}

int prec(char op) //연산자 우선순dnl 반환
{
    switch (op)
    {
    case '(': case ')': return 0;
    case '+': case '-': return 1;
    case '*': case '/': return 2;
    }
    return -1;
}

void infix_to_postfix(char exp[])
{
    char ch, top_op;
    int len;
    len = strlen(exp);
    StackType s;

    init_stack(&s); //스택초기화
    for (int i = 0; i < len; i++)
    {
        ch = exp[i]; //문자
        switch (ch)
        {
        case '+': case '-': case '*': case '/':
            while (!is_empty(&s) && (prec(ch) <= prec(peek(&s))))
                printf("%c", pop(&s));
            push(&s, ch);
            break;
        case '(':
            push(&s, ch);
            break;
        case ')':
            top_op = pop(&s);
            while (top_op != '(') //왼쪽 괄호가 나올때까지
            {
                printf("%c", top_op);
                top_op = pop(&s);
            }
            break;
        default:
            printf("%c", ch);
            break;
        }
    }
    while (!is_empty(&s)) //연산자출력
        printf("%c", pop(&s));
}

int main(void)
{
    char str[100];

    scanf("%s", str);
    infix_to_postfix(str);
    printf("\n");
    return 0;
}
