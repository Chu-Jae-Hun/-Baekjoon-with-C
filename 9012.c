#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef struct StackType {
	int data[MAX_STACK_SIZE];
	int top; //stack의 최상단 index = 원소의 개수
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

int check_matching(char* in)
{
	StackType s;
	char ch, open_ch;
	int len;
	len = strlen(in);
	init_stack(&s);

		for (int i = 0; i < len; i++)
		{
			ch = in[i];
			switch (ch)
			{
			case '(':
				push(&s, ch);
				break;
			case ')':
				if (is_empty(&s))
					return 0;
				else
				{
					open_ch = pop(&s);
				}
				break;
			}
		}
	if (!is_empty(&s))
		return 0;
	return 1;
}

int main()
{
	char str[51];
	int num;

	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
	{
		scanf("%s", str);
		if (check_matching(str) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
