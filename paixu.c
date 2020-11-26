#include<stdio.h>
#include<stdlib.h>
#include"paixu.h"
#define N 10
//选择排序法
void selectsort(int x[],int n)
{int i,j,k,t;
    for(i=0;i<n-1;i++)
      {k=i;
         for(j=i+1;j<n;j++)
if(x[j]<x[k]) k=j;
if(k!=i)
{t=x[i];x[i]=x[k];x[k]=t;}

}
}
//直接插入排序
void insertsort(int x[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{temp=x[i];
	j=i-1;
	while(j>=0&&x[j]>temp)
	{
		x[j+1]=x[j];
		j--;
	}
	x[j+1]=temp;
	}
}
//冒泡排序法
void bubble(int x[],int n)
{
	for(int i=0; i<n-1;i++)
	{
	for(int j=0;j<n-1-i;j++)
	{
		if(x[j]>x[j+1])
	{
	        int temp = x[j];
		x[j] = x[j+1];
		x[j+1]=temp;
	}
	}
	}
}

//快速排序法
void quicksort(int *arr,int low,int high)
{
	if(low<high)
	{
		int i=low;
		int j=high;
		int k=arr[low];
		while(i<j)
		{
			while(i<j&&arr[j]>=k)
			{
			j--;
			}
		       if(i<j)
	        	{
			arr[i++]=arr[j];
	        	}
		       while(i<j&&arr[i]<k)
		       {
			i++;
		       } 
		       if(i<k)
		       {
		       arr[j--]=arr[i];
		       }
	       }
	arr[i]=k;
	quicksort(arr,low,i-1);
	quicksort(arr,i+1,high);
      } 
}
	         



