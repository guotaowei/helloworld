#include<stdio.h>
int a[8]={10,4,6,3,8,2,5,7},b[8];
void main()
{
	//子函数声明
	int foo(int start,int end,int middle);
	int i;
	foo(0,7,7/2);
	for(i=0;i<8;i++)
		printf("%d\t",a[i]);
}
int foo(int start,int end,int middle)
{
	//设置返回条件
	if(middle>=end||middle<start)
		return 0;
	foo(start,middle,(start+middle)/2);
	foo(middle+1,end,(end+middle+1)/2);	
	int m=middle+1,i=start,j=start;
	//分组比较，当任一组下标超出，结束循环
	while(j<=middle&&m<=end)
	{
		if(a[j]>a[m])
		{
			b[i]=a[m];
			i++;
			m++;
		}
		else
		{
			b[i]=a[j];
			i++;
			j++;
		}
	}
	//剩下未作比较的值按顺序赋给数组b
	if(j<=middle)
	{
		for(j;j<=middle;j++)
		{
			b[i]=a[j];
			i++;
		}
	}
	else
	{
		for(m;m<=end;m++)
		{
			b[i]=a[m];
			i++;
		}
	}
	//把排好序的值重新赋给数组a
	for(j=start;j<=end;j++)
		a[j]=b[j];
}