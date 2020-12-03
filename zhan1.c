#include<stdio.h>
#include<stdlib.h>
#define stack_size 100
#define stack_crement_size 10
typedef int Elemtype;
#include"zhan1.h" 

 
 
//初始化栈 
void IntiStack(sqstack *s)
{
    s->base = (Elemtype*)malloc(sizeof(Elemtype)*stack_size);
    if(!s->base)
        exit(0);
 
    s->top = s->base;                 //设置栈为空 
    s->stacksize = stack_size;
}
 
//入栈操作 
int Push(sqstack* s,Elemtype e)
{
    if(s->top - s->base >= s->stacksize)    //判断是否栈满 
    {
        s->base = (Elemtype*)realloc(s->base,(s->stacksize + stack_crement_size)*sizeof(Elemtype));
        if(!s->base)
         exit(0);
 
        s->top = s->base + s->stacksize;                                   //重新设置栈顶 
        s->stacksize += stack_crement_size;                                //重新设置栈的大小 
    }
 
    *(s->top) = e;
    s->top++;
 
    return 1;
}
 
//出栈操作 
void Pop(sqstack* s,Elemtype *e)
{
    if(s->top == s->base)                                                //如果栈为空 
     return;
 
    *e = *--(s->top);
}
 
//求栈的当前容量 
int StackLen(sqstack s)
{
    return s.top - s.base;
}
 
//清空栈 
int StackEmpty(sqstack* s)
{
    return (s->stacksize == 0);
}
//销毁栈 
void DestoryStack(sqstack* s)
{
    int i,len;
    len = s->stacksize;
 
    for( i = 0; i <len; i++)
    {
        s->base++;
        free(s->base);
    }
 
    s->base = s->top = NULL;
    s->stacksize  = 0;
}
 


