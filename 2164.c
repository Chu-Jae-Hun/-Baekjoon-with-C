#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 500001

int N;
int front=-1;
int rear=-1;
int queue[MAX_SIZE];
int size;

int addq(int x){
	int tmp=(rear+1)%N;
	if(tmp==front)
		return 0;
	else{
		rear=(rear+1)%N;
		queue[rear]=x;
		size++;
		return 1;
	}
}

int delq(void){
	if(front==rear)
		return 0;
	else{
		front=(front+1)%N;
		size--;
		return queue[front];
	}
}

int Size(void){
	return size;
}

int main(void){
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++)
		addq(i);
	
	int x,count=0;

	while(Size()!=1){
		if(count%2==0){
			delq();
		}
		else{
			x=delq();
			addq(x);
		}
		count++;
	}
	printf("%d",delq());
	
	return 0;
}
