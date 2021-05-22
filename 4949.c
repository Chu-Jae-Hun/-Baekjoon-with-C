#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 500

typedef struct StackType
{
	char data[MAX_STACK_SIZE];
	int top; 
} StackType;

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

void push(StackType* s, char value)
{
	if (is_full(s))
		exit(1);
	s->data[++(s->top)] = value;
}

char pop(StackType* s)
{
	if (is_empty(s))
		exit(1);
	return s->data[(s->top)--];
}

int check_matching(const char* in)
{
	StackType s;
	char ch, open_ch;
	int i, n = strlen(in);
	init_stack(&s);

	for (i = 0; i < n; i++)
	{
		ch = in[i];
		switch (ch)
		{
		case '(':
		case '[':
			push(&s, ch);
			break;
		case ')':
		case ']':
			if (is_empty(&s))
				return 0;
			else
			{
				open_ch = pop(&s);
				if ((open_ch == '(' && ch != ')') || (open_ch == '[' && ch != ']'))
					return 0;
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
	char p[1000];

	while (1)
	{
		gets(p);

		if (p[0] == '.')
			break;

		if (check_matching(p) == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
