#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef double element;
typedef struct
{
	element data[MAX_STACK_SIZE];
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

void push(StackType* s, element item)
{
	if (is_full(s))
		exit(1);
	else
		s->data[++(s->top)] = item;
}

element pop(StackType* s)
{
	if (is_empty(s))
		exit(1);
	else
		return s->data[(s->top)--];
}

void eval(char* exp, int* num)
{
	char ch;
	int value, i = 0;
	int len = strlen(exp);
	double op1, op2;

	StackType s;

	init_stack(&s);

	for (i = 0; i < len; i++)
	{
		ch = exp[i];
		if (ch >= 'A' && ch <= 'Z')
		{
			value = num[ch - 'A'];
			push(&s, value);
		}
		else
		{
			op2 = pop(&s);
			op1 = pop(&s);

			switch (ch)
			{
			case '+':
				push(&s, op1 + op2);
				break;
			case '-':
				push(&s, op1 - op2);
				break;
			case '*':
				push(&s, op1 * op2);
				break;
			case '/':
				push(&s, op1 / op2);
				break;
			}
		}
	}
	printf("%.2lf", pop(&s));
}

int main()
{
	char exp[100];
	int n;

	scanf("%d", &n);

	if (n < 1 || n > 26)
		exit(1);
	
	int num[n];

	scanf("%s", exp);

	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	eval(exp, num);

	return 0;
}
