#include"paixu.h"

int main()
{
	int i, * p,a[10];
	int b[10],c[10],d[10];        //定义几个新的数组，接受乱序数据


	p=a;
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
		scanf("%d",p++);               //把10个数据导入a数组
	for(i=0;i<10;i++)
		b[i]=a[i];                     //使b数组接受乱序数据
	printf("选择排序初始数据：");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	p=a;
	printf("排序后数据：");
	selectsort(p,N);
	for(p=a,i=0;i<10;i++){
		printf("%d ",*p);
		p++;
	}
	printf("\n");

	printf("冒泡初始数据：");
	for(i=0;i<10;i++)
		printf("%d ",b[i]);
	printf("\n");
	for(i=0;i<10;i++)
		c[i]=b[i];                     //使c数组接受乱序数组
	p=b;
	bubble(p,N);
	printf("排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",b[i]);
	printf("\n");

	printf("直接插入初始数据：");
	for(i=0;i<10;i++)
		printf("%d ",c[i]);
	printf("\n");
	for(i=0;i<10;i++)
		d[i]=c[i];                     //使d数组接受乱序数据
	p=c;
	insertsort(p,N);
	printf("排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",c[i]);
	printf("\n");

	p=d;
	printf("快速排序前数据：");
	for(i=0;i<10;i++)
		printf("%d ",d[i]);
	printf("\n");
	quicksort(p,0,N-1);
	printf("排序后数据：");
	for(i=0;i<N;i++)
		printf("%d ",d[i]);
	printf("\n");
}
