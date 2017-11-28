int recursion_sort1(int a[],int b[],int start,int end)//递归排序法，小→大
{
	int middle=(start+end)/2;
	//设置返回条件
	if(middle>=end||middle<start)
		return 0;
	recursion_sort1(a,b,start,middle);
	recursion_sort1(a,b,middle+1,end);	
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
int recursion_sort2(int a[],int b[],int start,int end)//递归排序法，大→小
{
	int middle=(start+end)/2;
	//设置返回条件
	if(middle>=end||middle<start)
		return 0;
	recursion_sort2(a,b,start,middle);
	recursion_sort2(a,b,middle+1,end);	
	int m=middle+1,i=start,j=start;
	//分组比较，当任一组下标超出，结束循环
	while(j<=middle&&m<=end)
	{
		if(a[j]<a[m])
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
int sequence_sort1(int a[],int start,int end)//顺序排序法，小→大
{
	int i,j,k;
	for(i=start;i<end;i++)
		for(j=i+1;j<=end;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
}
void sequence_sort2(int a[],int start,int end)//顺序排序法，大→小
{
	int i,j,k;
	for(i=start;i<end;i++)
		for(j=i+1;j<=end;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
}
int bubble_sort1(int a[],int start,int end)//冒泡排序法，小→大
{
	int i,j,k;
	for(i=end;i>start;i--)
		for(j=start;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
}
int bubble_sort2(int a[],int start,int end)//冒泡排序法，大→小
{
	int i,j,k;
	for(i=end;i>start;i--)
		for(j=start;j<i;j++)
		{
			if(a[j]<a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
}
int max(int x,int y)//返回最大值
{
	if(x>y)
		return x;
	else
		return y;
}
