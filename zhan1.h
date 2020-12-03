#ifndef zhan1_h
#define zhan1_h
#include<stdio.h>
#include<stdlib.h>
#define stack_size 100
#define stack_crement_size 10
typedef int Elemtype;

///声明一个栈
typedef struct Stack
{
        Elemtype *top;
	Elemtype *base;
	int stacksize;
}sqstack;                                                                                                                                                     
//函数声明
void IntiStack(sqstack *s);
int Push(sqstack* s,Elemtype e);
void Pop(sqstack* s,Elemtype *e);
int StackLen(sqstack s);
int StackEmpty(sqstack* s);
void DestoryStack(sqstack* s);
#endif
