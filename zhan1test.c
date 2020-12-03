#include"zhan1.h"

int main(void)
{
    sqstack s;
    int i,c,k;
    int j = 0;               //用来记录转化后的8进制数位数
    int N;
    printf("请输入一个十进制数：");
    scanf("%d",&N);
    int W = N;

    IntiStack(&s);           //初始化栈

      while(N != 0)          //除k取余法转换，并把余数入栈
    {
      k = N%8;
      Push(&s,k);
      N = N/8;
      j++;
    }


    printf("十进制数 %d 转化为八进制数为: ",W);
    for( i=0; i<j; i++)
    {
        Pop(&s,&c);
        printf("%d ",c);
    }

    //DestoryStack(&s);
    printf("\n");
    return 0;
}

